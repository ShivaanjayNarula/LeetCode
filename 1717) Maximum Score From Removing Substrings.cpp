class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string a = "ab";
        string b = "ba";
        if(x < y)
        {
            swap(x, y);
            swap(a, b);
        }
        return solve(s, a, x) + solve(s, b, y);
    }
    int solve(string &s, string target, int x)
    {
        int n = s.size();
        int ans = 0;
        int i = -1;
        for(int j = 0; j < n; j++)
        {
            if(i >= 0 && s[i] == target[0] && s[j]  == target[1])
            {
                i--;
                ans += x;
            }
            else 
            {
                i++;
                s[i] = s[j];
            }
        }
        s = s.substr(0, i+1);
        return ans;
    }
};
