class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int one = 0;
        int zero = 0;
        int ans = 0;
        one = count(s.begin(), s.end(), '1');
        for(int i = 0; i < n-1; i++)
        {
            if(s[i] == '0')
            {
                zero++;
            }
            else
            {
                one--;
            }
            ans = max(ans, zero + one);
        }
        return ans;
    }
};
