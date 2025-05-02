class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int check = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            check ^= nums[i];
        }
        if(check == 0 || nums.size() % 2 == 0)
        {
            return true;
        }
        return false;
    }
};
