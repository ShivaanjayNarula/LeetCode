class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        int count = 0;
        int i = 0;
        int j = 0;
        string ans = "";
        while(i < n)
        {
            count = 0;
            while(j < n && word[i] == word[j] && count < 9)
            {
                j++;
                count++;
            }
            ans += to_string(count) + word[i];
            i = j;
        }
        return ans;
    }
};
