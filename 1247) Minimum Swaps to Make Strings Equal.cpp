class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int n = s1.size();
        if(s1 == s2)
        {
            return 0;
        }
        int count1 = 1;
        int count2 = 1;
        for(int i = 0; i < n; i++)
        {
            if(s1[i] == s2[i])
            {
                continue;
            }
            if(s1[i] == 'x')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if((count1 + count2) % 2 != 0)
        {
            return -1;
        }
        int ans = (count1 / 2) + (count2 / 2);
        return ans;
    }
};
