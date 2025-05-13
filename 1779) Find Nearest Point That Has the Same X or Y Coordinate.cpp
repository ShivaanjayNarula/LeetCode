class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size();
        int ans = -1;
        int mini = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(points[i][0] == x || points[i][1] == y)
            {
                int check = abs(points[i][0] - x) + abs(points[i][1] - y);
                if(check < mini)
                {
                    mini = check;
                    ans = i;
                }
            }
        }
        return ans;
    }
};
