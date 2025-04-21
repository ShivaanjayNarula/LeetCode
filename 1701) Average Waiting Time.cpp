class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        double n = customers.size();
        double wait = 0;
        double curr = 0;
        for(auto check : customers)
        {
            if(wait > check[0])
            {
                curr += wait - check[0] + check[1];
            }
            else
            {
                wait = check[0];
                curr += check[1];
            }
            wait += check[1];
        }
        double ans = curr/n;
        return ans;
    }
};
