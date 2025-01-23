class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x, y;
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                if(board[i][j] == 'R')
                {
                    x = i;
                    y = j;
                }
            }
        }
        int ans = 0;
        for(int i = x; i >= 0; i--)
        {
            if(board[i][y] == 'p')
            {
                ans++;
                break;
            }
            if(board[i][y] == 'B')
            {
                break;
            }
        }
        for(int i = x; i < 8; i++)
        {
            if(board[i][y] == 'p')
            {
                ans++;
                break;
            }
            if(board[i][y] == 'B')
            {
                break;
            }
        }
        for(int i = y; i >= 0; i--)
        {
            if(board[x][i] == 'p')
            {
                ans++;
                break;
            }
            if(board[x][i] == 'B')
            {
                break;
            }
        }
        for(int i = y; i < 8; i++)
        {
            if(board[x][i] == 'p')
            {
                ans++;
                break;
            }
            if(board[x][i] == 'B')
            {
                break;
            }
        }
        return ans;
    }
};
