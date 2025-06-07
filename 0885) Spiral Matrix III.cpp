class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int top = rStart;
        int down = rStart;
        int left = cStart;
        int right = cStart;
        vector<vector<int>> ans;
        ans.push_back({rStart, cStart});
        int count = 1;
        int check = 0;
        while(count < rows * cols)
        {
            if(check == 0)
            {
                for(int i = left + 1; i <= right+1; i++)
                {
                    if(i >= 0 && i < cols && top >= 0 && top < rows)
                    {
                        ans.push_back({top, i});
                        count++;
                    }
                }
                right++;
            }
            else if(check == 1)
            {
                for(int i = top+1; i <= down+1; i++)
                {
                    if(i >= 0 && i < rows && right >= 0 && right < cols)
                    {
                        ans.push_back({i, right});
                        count++;
                    }
                }
                down++;
            }
            else if(check == 2)
            {
                for(int i = right-1; i >= left-1; i--)
                {
                    if(i >= 0 && i < cols && down >= 0 && down < rows)
                    {
                        ans.push_back({down, i});
                        count++;
                    }
                }
                left--;
            }
            else if(check == 3)
            {
                for(int i = down-1; i >= top-1; i--)
                {
                    if(i >= 0 && i < rows && left >= 0 && left < cols)
                    {
                        ans.push_back({i, left});
                        count++;
                    }
                }
                top--;
            }
            check = (check + 1) % 4;
        }
        return ans;
    }
};
