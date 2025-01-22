class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int check = -1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 1)
            {
                //int temp = i;
                if((i - check) <= k && check != -1)
                {
                    return false;
                }
                check = i;
            }
        }
        return true;
    }
};
