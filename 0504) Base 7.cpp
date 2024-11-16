class Solution {
public:
    string convertToBase7(int num) {
        bool negative = (num < 0);
        int digit = 0;
        int ans = 0;
        if(negative)
        {
            num = num * -1;
        }
        if(num == 0)
        {
            ans = 0;
        }
        while(num > 0)
        {
            ans = ans + (num % 7) * pow(10, digit);
            num = num / 7;
            digit++;
        }
        if(negative)
        {
            return '-' + to_string(ans);
        }
        return to_string(ans);
    }
