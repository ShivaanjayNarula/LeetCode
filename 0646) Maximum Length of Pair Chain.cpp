class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(), pairs.end());
        int ans = 1;
        int check = pairs[0][1];
        for(int i = 0; i < n; i++)
        {
            if(pairs[i][0] > check)
            {
                ans++;
                check = pairs[i][1];
            }
            else
            {
                check = min(check, pairs[i][1]);
            }
        }
        return ans;
    }
};
