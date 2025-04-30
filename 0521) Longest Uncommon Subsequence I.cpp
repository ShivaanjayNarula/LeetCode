class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a == b)
        {
            return -1;
        }
        int n1 = a.size();
        int n2 = b.size();
        if(n1 > n2)
        {
            return n1;
        }
        return n2;
    }
};
