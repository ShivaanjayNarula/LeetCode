class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int black = 0;
        int white = 0;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                if(grid[i][j] == 'B')
                {
                    black++;
                }
                else
                {
                    white++;
                }
            }
        }
        if(white >= 3 || black >= 3)
        {
            return true;
        }
        black = 0;
        white = 0;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 1; j < 3; j++)
            {
                if(grid[i][j] == 'B')
                {
                    black++;
                }
                else
                {
                    white++;
                }
            }
        }
        if(white >= 3 || black >= 3)
        {
            return true;
        }
        black = 0;
        white = 0;
        for(int i = 1; i < 3; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                if(grid[i][j] == 'B')
                {
                    black++;
                }
                else
                {
                    white++;
                }
            }
        }
        if(white >= 3 || black >= 3)
        {
            return true;
        }
        black = 0;
        white = 0;
        for(int i = 1; i < 3; i++)
        {
            for(int j = 1; j < 3; j++)
            {
                if(grid[i][j] == 'B')
                {
                    black++;
                }
                else
                {
                    white++;
                }
            }
        }
        if(white >= 3 || black >= 3)
        {
            return true;
        }
        black = 0;
        white = 0;
        return false;
    }
};
