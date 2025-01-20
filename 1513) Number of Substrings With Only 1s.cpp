class Solution {
public:
    int numSub(string s) {
        long long n = s.size();
        long long ans = 0;
        long long add = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                add++;
                ans+=add;
            }
            else
            {
                add = 0;
            }
        }
        ans %= 1000000007;
        return ans;
    }
};
