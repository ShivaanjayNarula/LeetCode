class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size();
        int ans = 0;
        int i = 0;
        while(i < n)
        {
            if(s[i] != 'X')
            {
                i++;
            }
            else
            {
                i+=3;
                ans++;
            }
        }
        return ans;
    }
};
