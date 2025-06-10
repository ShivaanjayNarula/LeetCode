class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double ans = 0;
        int n = brackets.size();
        if(income == 0)
        {
            return 0;
        }
        int prevUpper = 0;
        for(int i = 0; i < n; i++)
        {
            int currUpper = brackets[i][0];
            int currPercent = brackets[i][1];
            int currIncome = min(income, currUpper - prevUpper);
            ans += currIncome * currPercent / 100.0;
            income -= currIncome;
            prevUpper = currUpper;
        }
        return ans;
    }
};
