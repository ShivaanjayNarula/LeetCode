class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n = s.size();
        if(k > 1)
        {
            sort(s.begin(), s.end());
            return s;
        }
        string ans = s;
        for(int i = 1; i < n; i++)
        {
            ans = min(ans, s.substr(i) + s.substr(0,i));
        }
        return ans;
    }
};
