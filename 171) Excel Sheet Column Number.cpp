class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        int power = 0;
        int n = columnTitle.size();
        for(int i = n - 1; i >= 0; i--)
        {
            result += ((columnTitle[i] - 'A' + 1) * pow(26, power++));
        }
        return result;
    }
};
