class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = sentence.size();
        int m = searchWord.size();
        int slow = 0;
        int fast = 1;
        for(int i = 0; i <= n; i++)
        {
            if(i == n || sentence[i] == ' ')
            {
                string check = sentence.substr(slow, i - slow);
                if(check.substr(0, m) == searchWord)
                {
                    return fast;
                }
                slow = i+1;
                fast++;
            }
        }
        return -1;
    }
};
