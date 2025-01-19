class Solution {
public:
    int countKeyChanges(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(tolower(s[i]) != tolower(s[i+1]))
            {
                ans++;
            }
        }
        return ans;
    }
};
