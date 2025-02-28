class Solution {
public:
    int minMoves(vector<int>& nums) {
        int diff = INT_MAX;
        int ans = 0;
        for(auto check : nums)
        {
            diff = min(diff, check);
        }
        for(auto add : nums)
        {
            ans += add - diff;
        }
        return ans;
    }
};
