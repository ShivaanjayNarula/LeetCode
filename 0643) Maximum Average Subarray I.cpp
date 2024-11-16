class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int check = INT_MIN;
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(i < k)
            {
                sum += nums[i];
                continue;
            }
            check = max(check, sum);
            sum += nums[i] - nums[i-k];
        }
        check = max(check, sum);
        return check/(double)k;
    }
};
