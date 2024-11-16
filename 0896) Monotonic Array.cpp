class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool increase = true;
        bool decrease = true;
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] < nums[i+1])
            {
                decrease = false;
            }
            else if(nums[i] > nums[i+1])
            {
                increase = false;
            }
        }
        if(!increase && !decrease)
        {
            return false;
        }
        return true;
    }
};
