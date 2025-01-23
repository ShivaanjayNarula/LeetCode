class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int check1 = 0;
        int check2 = 0;
        for(auto i : nums)
        {
            if(i > 0)
            {
                check1++;
            }
            else if(i < 0)
            {
                check2++;
            }
        }
        int ans = max(check1, check2);
        return ans;
    }
};
