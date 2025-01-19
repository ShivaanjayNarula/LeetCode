class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        for(int i = 0; i < n; i++)
        {
            int count = 0;
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1)
                {
                    count++;
                }
            }
            if(count == n-1)
            {
                return i;
            }
        }
        return -1;
    }
};
