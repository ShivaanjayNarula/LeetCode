class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        int check1 = 0;
        int check2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(moves[i] == 'L')
            {
                check1--;
                check2--;
            }
            else if(moves[i] == '_')
            {
                check1--;
                check2++;
            }
            else if(moves[i] == 'R')
            {
                check1++;
                check2++;
            }
        }
        check1 = abs(check1);
        check2 = abs(check2);
        int ans = max(check1, check2);
        return ans;
    }
};
