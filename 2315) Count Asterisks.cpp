class Solution {
public:
    int countAsterisks(string s) {
        int n = s.size();
        int ans = 0;
        bool check = false;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '|')
            {
                check = !check;
            }
            if(s[i] == '*' && check == false)
            {
                ans++;
            }
        }
        return ans;
    }
};
