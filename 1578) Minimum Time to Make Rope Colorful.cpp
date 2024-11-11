class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int ans = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(colors[i] == colors[i+1])
            {
                ans += min(neededTime[i], neededTime[i+1]);
                neededTime[i+1] = max(neededTime[i], neededTime[i+1]);
            }
        }
        return ans;
    }
};
