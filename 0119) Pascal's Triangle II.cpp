class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev(rowIndex+1);
        vector<int> curr(rowIndex+1);
        prev[0] = 1;
        for(int i = 1; i <= rowIndex; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(j-1 < 0)
                {
                    curr[j] = prev[j];
                }
                else
                {
                    curr[j] = prev[j] + prev[j-1];
                }
            }
            prev = curr;
        }
        return prev;
    }
};
