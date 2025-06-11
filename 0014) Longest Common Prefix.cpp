class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string ans = "";
        string first = strs[0];
        string last = strs[n-1];
        for(int i = 0; i < min(first.size(), last.size()); i++)
        {
            if(first[i] != last[i])
            {
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};
