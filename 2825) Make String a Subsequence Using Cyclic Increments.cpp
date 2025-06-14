class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int id = 0;
        int n = str2.size();
        for(char ch : str1)
        {
            if(id < n && (str2[id] - ch + 26) % 26 <= 1)
            {
                id++;
            }
        }
        if(id == n)
        {
            return true;
        }
        return false;
    }
};
