class Solution {
public:
    bool isNumber(string s) {
        regex numberPattern(R"(^[+-]?(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?$)");
        return regex_match(s, numberPattern);
    }
};
