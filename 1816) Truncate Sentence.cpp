class Solution {
public:
    string truncateSentence(string s, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = s.size();
        string ans = "";
        for(int i = 0; i < n; i++)
        {
            if(s[i] == ' ')
            {
                k--;
            }
            if(k == 0)
            {
                break;
            }
            ans += s[i];
        }
        return ans;
    }
};
