class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> shift(n+1, 0);
        for(auto it : shifts)
        {
            int start = it[0];
            int end = it[1];
            int direction = it[2];
            if(direction == 1)
            {
                shift[start] += 1;
                shift[end+1] -= 1;
            }
            else
            {
                shift[start] -= 1;
                shift[end+1] += 1;
            }
        }
        for(int i = 1; i < n; i++)
        {
            shift[i] += shift[i-1];
        }
        for(int i = 0; i < n; i++)
        {
            int change = (shift[i] % 26 + 26) % 26;
            s[i] = 'a' + ((s[i] - 'a' + change) % 26);
        }
        return s;
    }
};
