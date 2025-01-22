class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n = words.size();
        vector<string> code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string, int> mp;
        for(int i = 0; i < n; i++)
        {
            string a;
            int m = words[i].size();
            for(int j = 0; j < m; j++)
            {
                a += code[words[i][j] - 'a'];
            }
            mp[a] = 1;
        }
        return mp.size();
    }
};
