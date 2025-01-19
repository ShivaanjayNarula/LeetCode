class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int i = 0; i < n; i++)
        {
            total += nums[i];
        }
        int add = 0;
        for(int i = 0; i < n; add += nums[i++])
        {
            if(add * 2 == total - nums[i])
            {
                return i;
            }
        }
        return -1;
    }
};
