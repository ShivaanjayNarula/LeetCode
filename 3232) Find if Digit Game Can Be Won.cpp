class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int check1 = 0;
        int check2 = 0;
        for(auto i : nums)
        {
            if(i < 10)
            {
                check1 += i;
            }
            else
            {
                check2 += i;
            }
        }
        if(check1 != check2)
        {
            return true;
        }
        return false;
    }
};
