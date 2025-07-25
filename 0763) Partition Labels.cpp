class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[s[i]] = i;
        }
        vector<int> ans;
        int prev = -1;
        int maxi = 0;
        for(int i = 0; i < n; i++)
        {
            maxi = max(maxi, mp[s[i]]);
            if(maxi == i)
            {
                ans.push_back(maxi - prev);
                prev = maxi;
            }
        }
        return ans;
    }
};
