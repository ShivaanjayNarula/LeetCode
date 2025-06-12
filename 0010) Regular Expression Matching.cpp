class Solution {
public:
    bool isMatch(const string& s, string p) {
        bool isMatch = false;
        p = regex_replace(p, regex(R"(\*+)"), "*");
        p = "^" + p + "$";
        regex regexPattern(p);
        if(regex_match(s, regexPattern))
        {
            isMatch = true;
        }
        return isMatch;
    }
};
