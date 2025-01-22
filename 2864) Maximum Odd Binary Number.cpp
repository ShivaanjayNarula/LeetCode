class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                count++;
            }
        }
        if(count < 2)
        {
            sort(s.begin(), s.end());
            return s;
        }
        sort(s.rbegin(), s.rend());
        swap(s[count-1], s[n-1]);
        return s;
    }
};
