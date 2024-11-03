class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int one = 0;
        int zero = 0;
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                if(s[i] == '1')
                {
                    zero++;
                }
                else
                {
                    one++;
                }
            }
            else
            {
                if(s[i] == '0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }
            }
        }
        int ans;
        ans = min(one, zero);
        return ans;
    }
};
