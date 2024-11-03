class Solution {
public:
    bool rotateString(string s, string goal) {
        string check = s + s;
        if(s.size() != goal.size())
        {
            return false;
        }
        if(check.find(goal) != string::npos)
        {
            return true;
        }
        return false;
    }
};
