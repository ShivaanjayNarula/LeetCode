class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if(n <= 2)
        {
            return n;
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int duplicate = 0;
            int vertical = 0;
            unordered_map<double, int> mp;
            for(int j = i+1; j < n; j++)
            {
                if(points[i] == points[j])
                {
                    duplicate++;
                }
                if(points[i][0] == points[j][0])
                {
                    vertical++;
                }
                else
                {
                    double check = (double)(points[j][1] - points[i][1]) / (points[j][0] - points[i][0]);
                    mp[check]++;
                }
            }
            for(auto it : mp)
            {
                ans = max(ans, it.second + duplicate);
            }
            ans = max(ans, vertical + duplicate);
        }
        return ans+1;
    }
};
