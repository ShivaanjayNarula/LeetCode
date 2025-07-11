class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        int maxi = 0;
        for(int i = 0; i < n-1; i++)
        {
            maxi = max(maxi, nums[i]);
            ans += maxi;
        }
        return ans;
    }
};
