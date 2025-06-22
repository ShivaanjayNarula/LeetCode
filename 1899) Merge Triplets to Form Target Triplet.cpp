class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int n = triplets.size();
        vector<int> ans(3, 0);
        for(int i = 0; i < n; i++)
        {
            if(triplets[i][0] <= target[0] && triplets[i][1] <= target[1] && triplets[i][2] <= target[2])
            {
                ans[0] = max(ans[0], triplets[i][0]);
                ans[1] = max(ans[1], triplets[i][1]);
                ans[2] = max(ans[2], triplets[i][2]);
            }
        }
        if(ans == target)
        {
            return true;
        }
        return false;
    }
};
