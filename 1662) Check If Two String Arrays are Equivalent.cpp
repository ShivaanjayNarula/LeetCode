class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int m = word1.size();
        int n = word2.size();
        string a = "";
        string b = "";
        for(int i = 0; i < m; i++)
        {
            a += word1[i];
        }
        for(int i = 0; i < n; i++)
        {
            b += word2[i];
        }
        if(a==b)
        {
            return true;
        }
        return false;
    }
};
