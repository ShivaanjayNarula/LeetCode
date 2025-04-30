class Solution {
public:
    bool judgeCircle(string moves) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int check1 = 0;
        int check2 = 0;
        int n = moves.size();
        for(int i = 0; i < n; i++)
        {
            if(moves[i] == 'U')
            {
                check1++;
            }
            else if(moves[i] == 'D')
            {
                check1--;
            }
            else if(moves[i] == 'L')
            {
                check2++;
            }
            else if(moves[i] == 'R')
            {
                check2--;
            }
        }
        if(check1 == 0 && check2 == 0)
        {
            return true;
        }
        return false;
    }
};
