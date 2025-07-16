class Solution {
public:
    string lastSubstring(string s) {
        int n = s.size();
        int slow = 0;
        int fast = 1;
        int diff = 0;
        while(fast + diff < n)
        {
            if(s[slow + diff] == s[fast + diff])
            {
                diff++;
            }
            else if(s[slow + diff] < s[fast + diff])
            {
                slow = max(slow + diff + 1, fast);
                fast = slow + 1;
                diff = 0;
            }
            else
            {
                fast = fast + diff + 1;
                diff = 0;
            }
        }
        return s.substr(slow);
    }
};
