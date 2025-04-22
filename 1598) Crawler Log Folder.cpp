class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n = logs.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(logs[i] == "./")
            {
                continue;
            }
            else if(logs[i] == "../")
            {
                ans--;
                if(ans < 0)
                {
                    ans = 0;
                }
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
};
