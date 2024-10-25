class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            reverse(s.begin(), s.end()-1);
            reverse(s.begin(), s.end());
            if(s == goal)
            {
                return true;
            }
        }
        return false;
    }
};
