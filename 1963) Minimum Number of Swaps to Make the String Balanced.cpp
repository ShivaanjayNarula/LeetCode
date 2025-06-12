class Solution {
public:
    int minSwaps(string s) {
        int check = 0;
        for(char ch : s)
        {
            if(ch == '[')
            {
                check++;
            }
            else if(check > 0)
            {
                check--;
            }
        }
        return (check + 1) / 2;
    }
};
