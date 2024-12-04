class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        int add = 0;
        for (int i = n-1; i >= 0; i--)
        {
            add = (add + shifts[i]) % 26;
            s[i] = 'a' + (s[i] - 'a' + add) % 26;
        }
        return s;
    }
};
