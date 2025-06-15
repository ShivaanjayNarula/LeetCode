class Solution {
public:
    int minIncrements(int n, vector<int>& cost) {
        int ans = 0;
        for(int i = n/2 -1; i >= 0; i--)
        {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            ans += abs(cost[left] - cost[right]);
            cost[i] += max(cost[left], cost[right]);
        }
        return ans;
    }
};
