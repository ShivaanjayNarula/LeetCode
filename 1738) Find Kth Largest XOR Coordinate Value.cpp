class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                matrix[i][j] ^= matrix[i][j - 1];
            }
        }
        for(int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                matrix[j][i] ^= matrix[j - 1][i];
            }
        }
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (minHeap.size() < k)
                {
                    minHeap.push(matrix[i][j]);
                }
                else if(matrix[i][j] > minHeap.top())
                {
                    minHeap.pop();
                    minHeap.push(matrix[i][j]);
                }
            }
        }
        return minHeap.top();
    }
};
