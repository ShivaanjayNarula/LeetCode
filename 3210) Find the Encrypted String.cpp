class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.size();
        string ans = "";
        int i = 0;
        while(i < n)
        {
            int j = (i+k) % n;
            ans +=s[j];
            i++;
        }
        return ans;
    }
};
