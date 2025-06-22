class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        vector<string> ans;
        unordered_map<string, int> mp;
        if(n < 10)
        {
            return ans;
        }
        for(int i = 0; i <= n - 10; i++)
        {
            string check = s.substr(i, 10);
            mp[check]++;
        }
        for(auto it : mp)
        {
            if(it.second > 1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
