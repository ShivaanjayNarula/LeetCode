class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)
        {
            return 0;
        }
        int ans = 0;
        int check = 0;
        for(int i = 0; i < n-1; i++)
        {
            check = nums[i+1] - nums[i];
            for(int j = i+2; j < n; j++)
            {
                if(nums[j] - nums[j-1] == check)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
    }
};
