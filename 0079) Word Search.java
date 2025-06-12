class Solution {
    public boolean exist(char[][] board, String word) {
        int m = board.length;
        int n = board[0].length;
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
    public boolean helper(int row, int col, char[][] board, String word, int id)
    {
        int m = board.length;
        int n = board[0].length;
        if(id == word.length())
        {
            return true;
        }
        if(row < 0 || col < 0 || row >= m || col >= n || board[row][col] != word.charAt(id))
        {
            return false;
        }
        char temp = board[row][col];
        board[row][col] = '1';
        boolean check = helper(row, col-1, board, word, id+1) || helper(row-1, col, board, word, id + 1) || helper(row, col+1, board, word, id + 1) || helper(row+1, col, board, word, id + 1);
        board[row][col] = temp;
        return check;
    }
}
