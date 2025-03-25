class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        if(add(firstWord) + add(secondWord) == add(targetWord))
        {
            return true;
        }
        return false;
    }
    int add(string s)
    {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int check = s[i] - 'a';
            ans = ans * 10 + check; 
        }
        return ans;
    }
};
