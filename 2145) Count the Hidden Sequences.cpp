class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int n = differences.size();
        long long mini = 0;
        long long maxi = 0;
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += differences[i];
            maxi = max(maxi, sum);
            mini = min(mini, sum);
        }
        long long minStart = lower - mini;
        long long maxStart = upper - maxi;
        long long ans = max(0LL, maxStart - minStart + 1);
        return ans;
    }
};
