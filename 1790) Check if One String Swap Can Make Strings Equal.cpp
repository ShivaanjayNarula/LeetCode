class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        string c1 = s1;
        string c2 = s2;
        sort(c1.begin(), c1.end());
        sort(c2.begin(), c2.end());
        if(c1 != c2)
        {
            return false;
        }
        if(n1 != n2)
        {
            return false;
        }
        int check = 0;
        for(int i = 0; i < n1; i++)
        {
            if(s1[i] != s2[i])
            {
                check++;
            }
        }
        if(check == 2 || check == 0)
        {
            return true;
        }
        return false;
    }
};
