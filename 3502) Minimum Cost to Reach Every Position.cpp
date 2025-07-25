class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> ans(n);
        int check = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            check = min(check, cost[i]);
            ans[i] = check;
        }
        return ans;
    }
};
