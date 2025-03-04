class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int> st;
        int ans = 0;
        for(auto i : points)
        {
            st.insert(i[0]);
        }
        for(auto i = next(st.begin()); i != st.end(); i++)
        {
            ans = max(ans, *i - *prev(i));
        }
        return ans;
    }
};
