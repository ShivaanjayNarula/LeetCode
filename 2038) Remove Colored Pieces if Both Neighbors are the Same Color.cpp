class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        int alice = 0;
        int bob = 0;
        int i = 0;
        while(i < n)
        {
            int j = i;
            while(j < n && colors[i] == colors[j])
            {
                j++;
            }
            int check = j-i;
            if(check >= 3 && colors[i] == 'A')
            {
                alice += check - 2;
            }
            else if(check >= 3 && colors[i] == 'B')
            {
                bob += check - 2;
            }
            i = j;
        }
        if(alice > bob)
        {
            return true;
        }
        return false;
    }
};
