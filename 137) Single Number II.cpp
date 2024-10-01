class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i+2 < n; i=i+3)
        {
            if(nums[i] != nums[i+1])
            {
                res = nums[i];
                return res;
            }
        }
        return nums[n-1];
    }
};
