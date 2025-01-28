class Solution {
public:
    int numSteps(string s) {
        int n = s.size();
        int ans = 0;
        int add = 0;
        for(int i = n-1; i > 0; i--)
        {
            ans++;
            if(s[i] - '0' + add == 1)
            {
                add = 1;
                ans++;
            }
        }
        return ans + add;
    }
};
