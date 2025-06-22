class Solution {
public:
    string multiply(string s1, string s2) {
        if (s1 == "0" || s2 == "0")
        {
            return "0";
        }
        int n = s1.size();
        int m = s2.size();
        string ans(n+m, '0');
        for(int i = n-1; i >= 0; i--)
        {
            for(int j = m-1; j >= 0; j--)
            {
                int num = (s1[i] - '0') * (s2[j] - '0') + (ans[i+j+1]-'0'); 
                ans[i+j+1] = num % 10 + '0';
                ans[i+j] += num / 10; 
            }
        }
        int i=0;
        while(i < ans.size() && ans[i] == '0')
        {
            i++;
        }
        return ans.substr(i);
    }
};
