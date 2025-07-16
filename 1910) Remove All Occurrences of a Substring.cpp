class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.size();
        int m = part.size();
        while(n > 0 && s.find(part) < n)
        {
            int i = s.find(part);
            s.erase(s.begin() + i, s.begin() + i + m);
        }
        return s;
    }
};
