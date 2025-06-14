class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int ans = 0;
        int maxi = *max_element(candidates.begin(), candidates.end());
        for(int i = 1; i <= maxi; i <<= 1)
        {
            int count = 0;
            for(auto n : candidates)
            {
                count += (n & i) > 0;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
