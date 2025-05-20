class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int ans = 0;
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            check = 10 * (details[i][11] - '0') + (details[i][12] - '0');
            if(check > 60)
            {
                ans++;
            }
        }
        return ans;
    }
};
