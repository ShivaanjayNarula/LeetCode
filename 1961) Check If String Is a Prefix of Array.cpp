class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n = words.size();
        string check = "";
        for(int i = 0; i < n; i++)
        {
            check += words[i];
            if(check == s)
            {
                return true;
            }
        }
        return false;
    }
};
