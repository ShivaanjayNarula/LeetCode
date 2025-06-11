class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s = s1 + " " + s2;
        unordered_map<string, int> mp;
        stringstream ss(s);
        string temp;
        while(ss >> temp)
        {
            mp[temp]++;
        }
        vector<string> ans;
        for(auto it : mp)
        {
            if(it.second == 1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
