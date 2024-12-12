class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans = 0;
        int n = cost.size();
        sort(cost.rbegin(), cost.rend());
        int check = 2;
        for(int i = 0; i < n; i++)
        {
            if(i == check)
            {
                check += 3;
                continue;
            }
            ans += cost[i];
        }
        return ans;
    }
};
