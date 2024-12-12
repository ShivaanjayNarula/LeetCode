class Solution {
public:
    int splitNum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        int n = s.size();
        string a = "";
        string b = "";
        for(int i = 0; i < n; i+=2)
        {
            a += s[i];
        }
        for(int i = 1; i < n; i+=2)
        {
            b += s[i];
        }
        int num1 = stoi(a);
        int num2 = stoi(b);
        int ans = num1 + num2;
        return ans;
    }
};
