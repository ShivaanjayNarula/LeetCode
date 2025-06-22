class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        set<int> st(candyType.begin(), candyType.end());
        if(st.size() > n/2)
        {
            return n/2;
        }
        return st.size();
    }
};
