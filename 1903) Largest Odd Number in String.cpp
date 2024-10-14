class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        string ans = "";
        while(n >= 0)
        {
            int a;
            a = int(num[n]);
            if(a % 2 == 0)
            {
                n--;
            }
            else
            {
                for(int i = 0; i <= n; i++)
                {
                    ans += num[i];
                }
                break;
                }
        }
        return ans;
    }
};
