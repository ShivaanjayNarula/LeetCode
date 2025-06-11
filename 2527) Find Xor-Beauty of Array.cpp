class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        int b = 0;
        for(int i = 0; i < n; i++)
        {
            a |= nums[i];
            b ^= nums[i];
        }
        return (a&b);
    }
};
