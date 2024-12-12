class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> solve;
        int n = key.size();
        char start = 'a';
        for(int i = 0; i < n; i++)
        {
            if(key[i] != ' ' && solve[key[i]] == 0)
            {
                solve[key[i]] = start;
                start++;
            }
        }
        string ans = "";
        int m = message.size();
        for(int i = 0; i < m; i++)
        {
            if(message[i] == ' ')
            {
                ans += message[i];
            }
            else
            {
                ans += solve[message[i]];
            }
        }
        return ans;
    }
};
