class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        int n = words.size();
        sort(words.begin(), words.end());
        for(auto c : words[0])
        {
            bool check = true;
            for(int i = 1; i < n; i++)
            {
                if(words[i].find(c) == string::npos)
                {
                    check = false;
                    break;
                }
                else
                {
                    words[i].erase(words[i].find(c), 1);
                }
            }
            if(check == true)
            {
                ans.push_back(string(1, c));
            }
        }
        return ans;
    }
};
