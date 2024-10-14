class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int a = 0;
        string ans = "";
        while(i >= 0 || j >= 0 || a > 0)
        {
            if(i >= 0)
            {
                a += num1[i] - '0';
                i--;
            }
            if(j >= 0)
            {
                a += num2[j] - '0';
                j--;
            }
            ans += char(a % 10 + '0');
            a /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
