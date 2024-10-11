class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.length();
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == letter)
            {
                count++;
            }
        }
        int ans = (100 * count) / n;
        return ans;
    }
};
