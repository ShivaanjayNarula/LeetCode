class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        int check1 = 0;
        int check2 = 0;
        for(int i = 1; i < n; i++)
        {
            if(nums[i] > nums[i-1])
            {
                check1 = check2 + 1;
            }
            if(nums[i] < nums[i-1])
            {
                check2 = check1 + 1;
            }
        }
        return max(check1, check2) + 1;
    }
};
