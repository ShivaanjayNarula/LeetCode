class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n = words.size();
        vector<string> ans;
        for(int i = 0; i < n; i++)
        {
            if(helper(words[i]) == helper(pattern))
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
    string helper(string &s)
    {
        int n = s.size();
        unordered_map<char, int> mp;
        string ans = "";
        for(int i = 0; i < n; i++)
        {
            if(!mp.count(s[i]))
            {
                mp[s[i]] = mp.size();
            }
        }
        for(int i = 0; i < n; i++)
        {
            ans += 'a' + mp[s[i]];
        }
        return ans;
    }
};
