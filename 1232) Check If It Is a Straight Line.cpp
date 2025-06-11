class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if(n == 2)
        {
            return true;
        }
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        for(int i = 2; i < n; i++)
        {
            if((coordinates[i][1] - y1) * (x2 - x1) != (coordinates[i][0] - x1) * (y2 - y1))
            {
                return false;
            }
        }
        return true;
    }
};
