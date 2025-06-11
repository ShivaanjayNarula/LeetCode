class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end());
        int ans = 1;
        int i = 1;
        int mini = 0;
        int maxi = points[0][1];
        while(i < n)
        {
            if(points[i][0] > maxi)
            {
                mini = points[i][0];
                maxi = points[i][1];
                ans++;
            }
            else
            {
                mini = min(mini, points[i][0]);
                maxi = min(maxi, points[i][1]);
            }
            i++;
        }
        return ans;
    }
};
