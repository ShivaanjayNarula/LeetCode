class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i = 1; i < n-1; i++)
        {
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1])
            {
                return nums[i];
            }
        }
        if(nums[0] != nums[1])
        {
            return nums[0];
        }
        else
        {
            return nums[n-1];
        }
        return 0;
    }
};
