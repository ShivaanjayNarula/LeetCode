class Solution {
public:
    long long minimumMoney(vector<vector<int>>& transactions) {
        int n = transactions.size();
        long long ans = 0;
        int add = 0;
        for(int i = 0; i < n; i++)
        {
            add = max(add, min(transactions[i][0], transactions[i][1]));
            ans += max(transactions[i][0] - transactions[i][1], 0);
        }
        ans += add;
        return ans;
    }
};
