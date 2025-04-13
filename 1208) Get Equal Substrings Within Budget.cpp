class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        vector<int> cost(n, 0);
        for(int i = 0; i < n; i++)
        {
            cost[i] = abs(s[i] - t[i]);
        }
        vector<int> prefixSum(n+1, 0);
        for(int i = 1; i <= n; i++)
        {
            prefixSum[i] = prefixSum[i-1] + cost[i-1];
        }
        int left = 0;
        int right = n;
        int ans = 0;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(check(prefixSum, maxCost, mid))
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return ans;
    }
    bool check(vector<int> &prefixSum, int maxCost, int mid)
    {
        for(int i = 0; i + mid < prefixSum.size(); i++)
        {
            if(prefixSum[i+mid] - prefixSum[i] <= maxCost)
            {
                return true;
            }
        }
        return false;
    }
};
