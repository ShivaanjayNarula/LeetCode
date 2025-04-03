class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int ans = 0;
        int check = 0;
        for(int i = 1950; i < 2050; i++)
        {
            int temp = 0;
            for(auto j : logs)
            {
                if(j[0] <= i)
                {
                    temp++;
                }
                if(j[1] <= i)
                {
                    temp--;
                }
            }
            if(temp > check)
            {
                ans = i;
                check = temp;
            }
        }
        return ans;
    }
};
