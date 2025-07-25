class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int mini = nums[0];
        int currMax = 0;
        int currMin = 0;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            currMax = max(currMax, 0) + nums[i];
            maxi = max(maxi, currMax);
            currMin = min(currMin, 0) + nums[i];
            mini = min(mini, currMin);
            sum += nums[i];
        }
        if(sum == mini)
        {
            return maxi;
        }
        return max(maxi, sum - mini);
    }
};
