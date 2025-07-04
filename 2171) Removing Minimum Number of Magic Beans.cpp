class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long n = beans.size();
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += beans[i];
        }
        long long ans = LONG_MAX;
        sort(beans.begin(), beans.end());
        for(int i = 0; i < n; i++)
        {
            ans = min(ans, sum - (n-i) * beans[i]);
        }
        return ans;
    }
};
