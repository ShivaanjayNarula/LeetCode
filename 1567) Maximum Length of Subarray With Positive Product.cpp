class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size();
        int pos = 0;
        int neg = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > 0)
            {
                pos++;
                if(neg > 0)
                {
                    neg++;
                }
                else
                {
                    neg = 0;
                }
            }
            else if(nums[i] < 0)
            {
                int temp = pos;
                if(neg > 0)
                {
                    pos = neg + 1;
                }
                else
                {
                    pos = 0;
                }
                neg = temp + 1;
            }
            else
            {
                pos = 0;
                neg = 0;
            }
            ans = max(ans, pos);
        }
        return ans;
    }
};
