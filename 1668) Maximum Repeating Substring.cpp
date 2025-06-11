class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans = 0;
        string temp = word;
        while(sequence.find(temp) != string::npos)
        {
            ans++;
            temp += word;
        }
        return ans;
    }
};
