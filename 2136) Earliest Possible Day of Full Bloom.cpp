class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        int ans = 0;
        int add = 0;
        vector<pair<int, int>> mp;
        for(int i = 0; i < n; i++)
        {
            mp.push_back({growTime[i], plantTime[i]});
        }
        sort(mp.rbegin(), mp.rend());
        for(auto &[first, second] : mp)
        {
            add += second;
            ans = max(ans, add + first);
        }
        return ans;
    }
};
