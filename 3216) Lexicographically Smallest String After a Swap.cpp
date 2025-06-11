class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size();
        for(int i = 0; i < n-1; i++)
        {
            int check1 = (s[i] - '0') % 2;
            int check2 = (s[i+1] - '0') % 2;
            if(s[i] > s[i+1] && check1 == check2)
            {
                swap(s[i], s[i+1]);
                break;
            }
        }
        return s;
    }
};
