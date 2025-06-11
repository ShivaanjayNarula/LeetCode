class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        int n = queens.size();
        vector<vector<int>> board(8, vector<int>(8, 0));
        for(int i = 0; i < n; i++)
        {
            board[queens[i][0]][queens[i][1]] = 1;
        }
        int kx = king[0];
        int ky = king[1];
        vector<vector<int>> ans;
        for(int i = -1; i <= 1; i++)
        {
            for(int j = -1; j <= 1; j++)
            {
                if(i == 0 && j == 0)
                {
                    continue;
                }
                int row = kx + i;
                int col = ky + j;
                while(row >= 0 && row < 8 && col >= 0 && col < 8)
                {
                    if(board[row][col] == 1)
                    {
                        ans.push_back({row, col});
                        break;
                    }
                    row += i;
                    col += j;
                }
            }
        }
        return ans;
    }
};
