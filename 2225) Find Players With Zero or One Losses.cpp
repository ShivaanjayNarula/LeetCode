class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> mp;
        for(auto match : matches)
        {
            int winner = match[0];
            int loser = match[1];
            mp[loser]++;
            if(mp.find(winner) == mp.end())
            {
                mp[winner] = 0;
            }
        }
        vector<vector<int>> ans(2);
        for(auto it : mp)
        {
            if(it.second == 0)
            {
                ans[0].push_back(it.first);
            }
            else if(it.second == 1)
            {
                ans[1].push_back(it.first);
            }
        }
        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());
        return ans;
    }
};
