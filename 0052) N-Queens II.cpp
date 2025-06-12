class Solution {
public:
    vector<vector<string>> ans;
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solve(board, 0);
        return ans.size();
    }
    void solve(vector<string>& board, int row)
    {
        int n = board.size();
        if(row == n)
        {
            ans.push_back(board);
            return;
        }
        for(int col = 0; col < n; col++)
        {
            if(isSafe(board, row, col))
            {
                board[row][col] = 'Q';
                solve(board, row + 1);
                board[row][col] = '.';
            }
        }
    }
    bool isSafe(vector<string>& board, int row, int col)
    {
        int n = board.size();
        for(int i = 0; i < row; i++)
        {
            if(board[i][col] == 'Q')
            {
                return false;
            }
        }
        for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        {
            if(board[i][j] == 'Q')
            {
                return false;
            }
        }
        for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        {
            if(board[i][j] == 'Q')
            {
                return false;
            }
        }
        return true;
    }
};
