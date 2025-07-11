class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_set<int> st;
        for(int i = 1; i <= bound; i*=x)
        {
            for(int j = 1; j <= bound; j*= y)
            {
                if(i+j <= bound)
                {
                    st.insert(i+j);
                }
                if(y == 1)
                {
                    break;
                }
            }
            if(x == 1)
            {
                break;
            }
        }
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};
