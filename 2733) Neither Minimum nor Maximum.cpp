class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min = nums[0];
        int max = nums[n-1];
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != min && nums[i] != max)
            {
                return nums[i];
            }
        }
        return -1;
    }
};
