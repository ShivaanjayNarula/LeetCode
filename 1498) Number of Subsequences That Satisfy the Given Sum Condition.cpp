class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;
        int mod = 1e9 + 7;
        sort(nums.begin(), nums.end());
        vector<int> pow(n, 1);
        for(int i = 1; i < n; i++)
        {
            pow[i] = (pow[i-1] * 2) % mod;
        }
        int left = 0;
        int right = n-1;
        while(left <= right)
        {
            if(nums[left] + nums[right] <= target)
            {
                ans = (ans + pow[right - left]) % mod;
                left++;
            }
            else
            {
                right--;
            }
        }
        return ans;
    }
};
