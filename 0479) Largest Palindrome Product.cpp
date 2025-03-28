class Solution {
public:
    int largestPalindrome(int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        if(n == 1)
        {
            return 9;
        }
        int high = pow(10, n) - 1;
        int low = pow(10, n-1);
        int modulo = 1337;
        for(int i = high; i >= low; i--)
        {
            string s = to_string(i);
            string k = s;
            reverse(k.begin(), k.end());
            s += k;
            long long check = stoll(s);
            {
                for(int j = high; j >= sqrtl(check); j--)
                {
                    if(check % j == 0)
                    {
                        return check % modulo;
                    }
                }
            }
        }
        return 0;
    }
};
