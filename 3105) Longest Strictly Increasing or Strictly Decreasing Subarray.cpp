class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        for(int i = 1; i < n; i++)
        {
            int count = 1;
            for(int j = i-1; j >= 0; j--)
            {
                if(nums[j+1] > nums[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            ans = max(ans, count);
        }
        for(int i = 1; i < n; i++)
        {
            int count = 1;
            for(int j = i-1; j >= 0; j--)
            {
                if(nums[j+1] < nums[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
