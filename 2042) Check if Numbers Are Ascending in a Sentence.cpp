class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0;
        int curr = 0;
        for(auto ch : s)
        {
            if(isdigit(ch))
            {
                curr = curr * 10 + (ch - '0');
            }
            else if(curr != 0)
            {
                if(prev >= curr)
                {
                    return false;
                }
                prev = curr;
                curr = 0;
            }
        }
        if(curr == 0 || prev < curr)
        {
            return true;
        }
        return false;
    }
};
