class Solution {
public:
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        string path = "";
        int ans = 0;
        helper(0, ans, arr, path);
        return ans;
    }
    void helper(int id, int &ans, vector<string> &arr, string path)
    {
        int n = arr.size();
        if(!check(path))
        {
            return;
        }
        ans = max(ans, static_cast<int>(path.size()));
        for(int i = id; i < n; i++)
        {
            helper(i+1, ans, arr, path + arr[i]);
        }
    }
    bool check(string &s)
    {
        int n = s.size();
        unordered_set<char> st;
        for(int i = 0; i < n; i++)
        {
            if(st.count(s[i]))
            {
                return false;
            }
            st.insert(s[i]);
        }
        return true;
    }
};
