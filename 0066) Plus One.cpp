class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        digits[n] += 1;
        while(digits[n] % 10 == 0 && n != 0)
        {
            digits[n] -= 10;
            n -= 1;
            digits[n] += 1;
        }
        vector<int> ans;
        for(int i = 0; i < digits.size(); i++)
        {
            if(digits[i] == 10)
            {
                ans.push_back(1);
                ans.push_back(0);
            }
            else
            {
                ans.push_back(digits[i]);
            }
        }
        return ans;
    }
};
