class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixMin(n, 0);
        vector<int> suffixMin(n, 0);
        prefixMin[0] = nums[0];
        suffixMin[n-1] = nums[n-1];
        for(int i = 1; i < n; i++)
        {
            prefixMin[i] = min(prefixMin[i-1], nums[i]);
        }
        for(int i = n-2; i >= 0; i--)
        {
            suffixMin[i] = min(suffixMin[i+1], nums[i]);
        }
        int checkSum = INT_MAX;
        for(int i = 1; i < n-1; i++)
        {
            if(prefixMin[i-1] < nums[i] && suffixMin[i+1] < nums[i])
            {
                checkSum = min(checkSum, prefixMin[i-1] + nums[i] + suffixMin[i+1]);
            }
        }
        if(checkSum == INT_MAX)
        {
            return -1;
        }
        return checkSum;
    }
};
