class Solution {
public:
    int maxOperations(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans = 0;
        int add = 0;
        int n = s.size();
        for(int i = 0; i < n-1; i++)
        {
            if(s[i] == '1')
            {
                add++;
            }
            if(s[i] == '1' && s[i+1] == '0')
            {
                ans += add;
            }
        }
        return ans;
    }
};
