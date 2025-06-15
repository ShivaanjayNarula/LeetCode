class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& queries) {
        int m = queries.size();
        vector<int> ans(m, 1);
        for(int i = 0; i < m; i++)
        {
            int check1 = queries[i][0];
            int check2 = queries[i][1];
            while(check1 != check2)
            {
                if(check1 > check2)
                {
                    check1 /= 2;
                }
                else if(check2 > check1)
                {
                    check2 /= 2;
                }
                ans[i]++;
            }
        }
        return ans;
    }
};
