class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n = words.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int len = words[i].size();
            string sub = s.substr(0, len);
            if(words[i] == sub)
            {
                ans++;
            }
        }
        return ans;
    }
};
