class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int prefix = nums[0];
        vector<int> minSuffix(n, 0);
        minSuffix[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--)
        {
            minSuffix[i] = min(minSuffix[i+1], nums[i]);
        }
        for(int i = 1; i < n-1; i++)
        {
            if(prefix < nums[i] && nums[i] < minSuffix[i+1])
            {
                ans += 2;
            }
            else if(nums[i-1] < nums[i] && nums[i] < nums[i+1])
            {
                ans++;
            }
            prefix = max(prefix, nums[i]);
        }
        return ans;
    }
};
