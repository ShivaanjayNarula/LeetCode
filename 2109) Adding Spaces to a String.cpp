class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int n = s.length();
        int m = spaces.size();
        int a = 0;
        for(int i = 0; i < n; i++)
        {
            if(a < m && i == spaces[a])
            {
                ans += " ";
                a++;
            }
            ans += s[i];
        }
        return ans;
    }
};
