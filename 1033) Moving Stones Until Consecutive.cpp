class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> nums = {a, b, c};
        sort(nums.begin(), nums.end());
        int mini = 0;
        int maxi = 0;
        if(nums[2] - nums[0] == 2)
        {
            return {0, 0};
        }
        if(min(nums[1] - nums[0], nums[2] - nums[1]) <= 2)
        {
            mini = 1;
        }
        else
        {
            mini = 2;
        }
        maxi = nums[2] - nums[0] - 2;
        return {mini, maxi};
    }
};
