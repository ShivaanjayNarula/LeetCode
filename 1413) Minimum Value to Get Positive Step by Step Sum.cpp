class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            ans = min(ans, sum);
        }
        return -ans+1;
    }
};
