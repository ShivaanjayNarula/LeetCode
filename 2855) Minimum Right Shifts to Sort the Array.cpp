class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        int count = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                if(count == 0)
                {
                    index = i+1;
                    count++;
                }
                else
                {
                    return -1;
                }
            }
        }
        if(index == -1)
        {
            return 0;
        }
        if(nums[n-1] > nums[0])
        {
            return -1;
        }
        return n-index;
    }
};
