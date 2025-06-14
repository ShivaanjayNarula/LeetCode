class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        string s;
        helper(s, n, n);
        return ans;
    }
    void helper(string &s, int left, int right)
    {
        if(left == 0 && right == 0)
        {
            ans.push_back(s);
            return;
        }
        if(left > 0)
        {
            s.push_back('(');
            helper(s, left-1, right);
            s.pop_back();
        }
        if(right > 0)
        {
            if(left < right)
            {
                s.push_back(')');
                helper(s, left, right-1);
                s.pop_back();
            }
        }
    }
};
