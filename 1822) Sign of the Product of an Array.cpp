class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(nums[i] < 0)
            {
                sign++;
            }
            else if(nums[i] == 0)
            {
                return 0;
            }
        }
        if(sign % 2 == 0)
        {
            return 1;
        }
        return -1;
    }
};
