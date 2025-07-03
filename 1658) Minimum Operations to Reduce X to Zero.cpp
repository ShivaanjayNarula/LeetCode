class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int targetSum = sum-x;
        if(targetSum < 0)
        {
            return -1;
        }
        int left = 0;
        int currentSum = 0;
        int maxlength = -1;
        for(int right = 0; right < n; right++)
        {
            currentSum += nums[right];
            while(currentSum > targetSum && left <= right)
            {
                currentSum -= nums[left];
                left++;
            }
            if(currentSum == targetSum)
            {
                maxlength = max(maxlength, right-left+1);
            }
        }
        if(maxlength == -1)
        {
            return -1;
        }
        return n - maxlength;
    }
};
