class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s = a;
        int ans = 1;
        int n = a.size();
        int m = b.size();
        while(s.size() < b.size())
        {
            s += a;
            ans++;
        }
        if(s.find(b) != string::npos)
        {
            return ans;
        }
        s += a;
        ans++;
        if(s.find(b) != string::npos)
        {
            return ans;
        }
        return -1;
    }
};
