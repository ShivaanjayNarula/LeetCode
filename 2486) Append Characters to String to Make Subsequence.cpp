class Solution {
public:
    int appendCharacters(string s, string t) {
        int left = 0;
        int right = 0;
        int m = s.size();
        int n = t.size();
        while(left < m && right < n)
        {
            if(s[left] == t[right])
            {
                right++;
            }
            left++;
        }
        return n - right;
    }
};
