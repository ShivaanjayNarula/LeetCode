class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> ans;
        for(auto i : strs)
        {
            string a = i;
            sort(a.begin(),a.end());
            m[a].push_back(i);
        }
        for(auto i : m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
