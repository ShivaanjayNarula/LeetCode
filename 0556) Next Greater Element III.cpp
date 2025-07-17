class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int len = s.size();
        int i = len-2;
        int j = len-1;
        while(i >= 0 && s[i] >= s[i+1])
        {
            i--;
        }
        if(i == -1)
        {
            return -1;
        }
        while(s[j] <= s[i])
        {
            j--;
        }
        swap(s[i], s[j]);
        reverse(s.begin()+i+1, s.end());
        long long ans = stoll(s);
        if(ans > INT_MAX || ans <= n)
        {
            return -1;
        }
        return ans;
    }
};
