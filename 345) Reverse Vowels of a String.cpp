class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int n = s.size();
        string vowels = "aeiouAEIOU";
        char temp;
        while(i < n)
        {
            while(i < s.size() && vowels.find(s[i]) == string :: npos)
            {
                i++;
            }
            while(i < s.size() && vowels.find(s[n]) == string :: npos)
            {
                n--;
            }
            if(i < n)
            {
                temp = s[i];
                s[i] = s[n];
                s[n] = temp;
            }
            i++;
            n--;
        }
        return s;
    }
};
