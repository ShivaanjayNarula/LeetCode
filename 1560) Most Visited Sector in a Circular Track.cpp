class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int n1 = rounds.size();
        vector<int> ans;
        if(rounds[0] <= rounds[n1-1])
        {
            for(int i = rounds[0]; i <= rounds[n1-1]; i++)
            {
                ans.push_back(i);
            }
        }
        else
        {
            for(int i = 1; i <= rounds[n1-1]; i++)
            {
                ans.push_back(i);
            }
            for(int i = rounds[0]; i <= n; i++)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
