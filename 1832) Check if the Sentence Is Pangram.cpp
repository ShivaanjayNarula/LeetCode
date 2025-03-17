class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        if(n < 26)
        {
            return false;
        }
        bool check[26] = {0};
        for(int i = 0; i < n; i++)
        {
            char ch = sentence[i];
            if(ch >= 'a' && ch <= 'z')
            {
                check[ch-'a'] = true;
            }
            if(ch >= 'A' && ch <= 'Z')
            {
                check[ch-'A'] = true;
            }
        }
        for(auto i : check)
        {
            if(i == false)
            {
                return false;
            }
        }
        return true;
    }
};
