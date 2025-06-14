class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        int n = s.size();
        helper(ans, s, 0);
        return ans;
    }
    void helper(vector<string> &ans, string &s, int id)
    {
        int n = s.size();
        if(id == n)
        {
            ans.push_back(s);
            return;
        }
        helper(ans, s, id+1);
        if(isalpha(s[id]))
        {
            s[id] ^= 32;
            helper(ans, s, id+1);
            s[id] ^= 32;
        }
    }
};
