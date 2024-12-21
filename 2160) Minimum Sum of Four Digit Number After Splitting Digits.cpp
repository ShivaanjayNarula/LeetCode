class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        string a = "";
        string b = "";
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                a += s[i];
            }
            else
            {
                b += s[i];
            }
        }
        int num1 = stoi(a);
        int num2 = stoi(b);
        int ans = num1 + num2;
        return ans;
    }
};
