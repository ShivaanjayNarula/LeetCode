class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans = "";
        while(a >= 1 && b >= 1)
        {
            if(a-b >= 1)
            {
                ans += "aab";
                a -= 2;
                b--;
            }
            else if(a == b)
            {
                ans += "ab";
                a--;
                b--;
            }
            else if(b-a >= 1)
            {
                ans += "bba";
                b -= 2;
                a--;
            }
        }

        if(a == 2)
        {
            ans += "aa";
        }
        else if(a == 1)
        {
            ans += "a";
        }

        if(b == 2)
        {
            ans += "bb";
        }
        else if(b == 1)
        {
            ans += "b";
        }

        return ans;
    }
};
