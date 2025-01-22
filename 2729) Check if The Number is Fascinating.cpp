class Solution {
public:
    bool isFascinating(int n) {
        string check;
        check = to_string(n) + to_string(2*n) + to_string(3*n);
        sort(check.begin(), check.end());
        if(check == "123456789")
        {
            return true;
        }
        return false;
    }
};
