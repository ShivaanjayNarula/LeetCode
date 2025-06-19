class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n+1, -1);
        return helper(days, costs, 0, dp);
    }
    int helper(vector<int> &days, vector<int> &costs, int id, vector<int> &dp)
    {
        int n = days.size();
        if(id >= n)
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int cost1 = costs[0] + helper(days, costs, id+1, dp);
        int id1 = id;
        while(id1 < n && days[id1] < days[id] + 7)
        {
            id1++;
        }
        int cost2 = costs[1] + helper(days, costs, id1, dp);
        int id2 = id;
        while(id2 < n && days[id2] < days[id] + 30)
        {
            id2++;
        }
        int cost3 = costs[2] + helper(days, costs, id2, dp);
        dp[id] = min({cost1, cost2, cost3});
        return dp[id];
    }
};
