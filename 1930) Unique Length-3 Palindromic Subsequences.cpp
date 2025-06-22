class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        vector<int> first(26, -1);
        vector<int> last(26, -1);
        for(int i = 0; i < n; i++)
        {
            if(first[s[i] - 'a'] == -1)
            {
                first[s[i] - 'a'] = i;
            }
            last[s[i] - 'a'] = i;
        }
        int ans = 0;
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            int id1 = first[ch - 'a'];
            int id2 = last[ch - 'a'];
            if(id1 != -1 && id2 > id1)
            {
                set<char> st;
                for(int i = id1+1; i < id2; i++)
                {
                    st.insert(s[i]);
                }
                ans += st.size();
            }
        }
        return ans;
    }
};
