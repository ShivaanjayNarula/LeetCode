class Solution {
public:
    long long sumScores(string s) {
        long long n = s.size();
        vector<long long> z(n, 0);
        long long left = 0;
        long long right = 0;
        for(long long i = 1; i < n; i++)
        {
            if(i <= right)
            {
                z[i] = min(right - i + 1, z[i-left]);
            }
            while(i + z[i] < n && s[z[i]] == s[i+z[i]])
            {
                z[i]++;
            }
            if(i + z[i] - 1 > right)
            {
                left = i;
                right = i + z[i] - 1;
            }
        }
        long long ans = n;
        for(int i = 0; i < n; i++)
        {
            ans += z[i];
        }
        return ans;
    }
};
