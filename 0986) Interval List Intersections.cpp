class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int i = 0;
        int j = 0;
        int m = firstList.size();
        int n = secondList.size();
        while(i < m && j < n)
        {
            int start = max(firstList[i][0], secondList[j][0]);
            int end = min(firstList[i][1], secondList[j][1]);
            if(start <= end)
            {
                ans.push_back({start, end});
            }
            if(firstList[i][1] > secondList[j][1])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};
