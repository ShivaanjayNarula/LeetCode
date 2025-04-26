class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int n = hours.size();
        int ans = 0;
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int check = hours[i] + hours[j];
                if(check % 24 == 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
