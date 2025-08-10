class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        int n = nums.size();
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            if(check > nums[i])
            {
                return false;
            }
            nums[i] -= check;
            check += nums[i];
            if(i >= k-1)
            {
                check -= nums[i-k+1];
            }
        }
        if(check == 0)
        {
            return true;
        }
        return false;
    }
};
