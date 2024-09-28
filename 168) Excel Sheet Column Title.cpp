class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber > 0)
        {
            columnNumber--;
            int a = columnNumber % 26;
            columnNumber = columnNumber / 26;
            ans = ans + ((char)('A' + a));
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
