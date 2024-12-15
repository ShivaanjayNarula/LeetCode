class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < n; i++)
        {
            sum1 += nums[i];
            while(nums[i])
            {
                int rem = nums[i] % 10;
                sum2 += rem;
                nums[i] /= 10;
            }
        }
        int ans = abs(sum1 - sum2);
        return ans;
    }
};
