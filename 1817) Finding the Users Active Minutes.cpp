class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        int n = logs.size();
        sort(logs.begin(), logs.end());
        vector<int> ans(k, 0);
        int i = 0;
        while(i < n)
        {
            int add = 0;
            while(i < n-1 && logs[i][0] == logs[i+1][0])
            {
                if(logs[i][1] != logs[i+1][1])
                {
                    add++;
                }
                i++;
            }
            ans[add]++;
            i++;
        }
        return ans;
    }
};
