class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for(int i = 0, j = 0; i < n; i++)
        {
            if(nums[i] != 0)
            {
                j = i + 1;
            }
            ans += i - j + 1;
        }
        return ans;
    }
};
