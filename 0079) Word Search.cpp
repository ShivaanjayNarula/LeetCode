class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(helper(i, j, board, word, 0))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool helper(int row, int col, vector<vector<char>> &board, string word, int id)
    {
        int m = board.size();
        int n = board[0].size();
        if(id == word.size())
        {
            return true;
        }
        if(row < 0 || col < 0 || row >= m || col >= n || board[row][col] != word[id])
        {
            return false;
        }
        char temp = board[row][col];
        board[row][col] = '*';
        bool check = helper(row, col-1, board, word, id+1) || helper(row-1, col, board, word, id+1) || helper(row, col+1, board, word, id+1) || helper(row+1, col, board, word, id+1);
        board[row][col] = temp;
        return check;
    }
};
