class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd = 0;
        int even = 0;
        vector<int> check;
        while(n)
        {
            if(n % 2 == 0)
            {
                check.push_back(0);
            }
            else
            {
                check.push_back(1);
            }
            n /= 2;
        }
        for(int i = 0; i < check.size(); i++)
        {
            if(check[i] == 1 && i % 2 == 0)
            {
                even++;
            }
            else if(check[i] == 1 && i % 2 == 1)
            {
                odd++;
            }
        }
        return {even, odd};
    }
};
