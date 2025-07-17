class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int left = 0;
        int right = 0;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(i < n/2)
            {
                if(num[i] == '?')
                {
                    left++;
                }
                else
                {
                    sum1 += num[i] - '0';
                }
            }
            else
            {
                if(num[i] == '?')
                {
                    right++;
                }
                else
                {
                    sum2 += num[i] - '0';
                }
            }
        }
        if(sum1 + left * 4.5 != sum2 + right * 4.5)
        {
            return true;
        }
        return false;
    }
};
