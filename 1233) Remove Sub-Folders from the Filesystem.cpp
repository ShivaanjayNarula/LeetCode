class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        int n = folder.size();
        sort(folder.begin(), folder.end());
        vector<string> ans;
        ans.push_back(folder[0]);
        for(int i = 1; i < n; i++)
        {
            string last = ans.back();
            last += '/';
            if(folder[i].compare(0, last.size(), last) != 0)
            {
                ans.push_back(folder[i]);
            }
        }
        return ans;
    }
};
