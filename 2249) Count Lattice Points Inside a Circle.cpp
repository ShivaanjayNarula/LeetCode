class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int ans = 0;
        for(int i = 0; i <= 200; i++)
        {
            for(int j = 0; j <= 200; j++)
            {
                for(auto &it :circles)
                {
                    int x = it[0];
                    int y = it[1];
                    int r = it[2];
                    if((x-i) * (x-i) + (y-j) * (y-j) <= r*r)
                    {
                        ans++;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
