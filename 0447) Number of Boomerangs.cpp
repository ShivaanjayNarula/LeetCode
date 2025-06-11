class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            unordered_map<double, int> mp;
            for(int j = 0; j < n; j++)
            {
                double check = sqrt((points[i][0] - points[j][0]) * (points[i][0] - points[j][0]) + (points[i][1] - points[j][1]) * (points[i][1] - points[j][1]));
                if(mp.find(check) == mp.end())
                {
                    mp[check] = 1;
                }
                else
                {
                    mp[check]++;
                }
            }
            for(auto it : mp)
            {
                ans += it.second * (it.second - 1);
            }
        }
        return ans;
    }
};
