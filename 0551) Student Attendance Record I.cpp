class Solution {
public:
    bool checkRecord(string s) {
        int n = s.size();
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'A')
            {
                count1++;
                if(count1 >= 2)
                {
                    return false;
                }
            }
            if(s[i] == 'L')
            {
                if(s[i+1] == 'L')
                {
                    if(s[i+2] == 'L')
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
