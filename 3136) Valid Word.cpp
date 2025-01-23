class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if(n < 3)
        {
            return false;
        }
        int vowel = 0;
        int consonant = 0;
        for(int i = 0; i < n; i++)
        {
            if(isalpha(word[i]))
            {
                if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
                {
                    vowel++;
                }
                else
                {
                    consonant++;
                }
            }
            else if(!isdigit(word[i]))
            {
                return false;
            }
        }
        if(vowel > 0 && consonant > 0)
        {
            return true;
        }
        return false;
    }
};
