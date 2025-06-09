class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int top = 0;
        int bottom = m-1;
        int left = 0;
        int right = n-1;
        while(top < bottom && left < right)
        {
            int temp = k;
            temp %= (2 * (right - left + bottom - top));
            while(temp--)
            {
                int temp1 = grid[top][left];
                for(int i = left; i < right; i++)
                {
                    grid[top][i] = grid[top][i+1];
                }
                int temp2 = grid[bottom][left];
                for(int i = bottom; i > top; i--)
                {
                    grid[i][left] = grid[i-1][left];
                }
                grid[top+1][left] = temp1;
                int temp3 = grid[bottom][right];
                for(int i = right; i > left; i--)
                {
                    grid[bottom][i] = grid[bottom][i-1];
                }
                grid[bottom][left+1] = temp2;
                for(int i = top; i < bottom; i++)
                {
                    grid[i][right] = grid[i+1][right];
                }
                grid[bottom-1][right] = temp3;
            }
            left++;
            right--;
            top++;
            bottom--;
        }
        return grid;
    }
};
