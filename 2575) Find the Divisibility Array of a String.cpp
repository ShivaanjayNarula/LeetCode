class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n = word.size();
        vector<int> ans;
        long long check = 0;
        for(int i = 0; i < n; i++)
        {
            check = check * 10 + (word[i] - '0');
            check %= m;
            if(check == 0)
            {
                ans.push_back(1);
            }
            else
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
};
