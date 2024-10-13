class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int ans = 0;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            int vowel = 0;
            int consonant = 0;
            for(int j = i; j < n; j++)
            {
                char c = s[j];
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                {
                    vowel++;
                }
                else
                {
                    consonant++;
                }
                if((vowel == consonant) && (vowel * consonant)%k == 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
