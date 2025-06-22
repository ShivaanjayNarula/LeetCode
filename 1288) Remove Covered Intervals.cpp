class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int ans = 0;
        int left = -1;
        int right = -1;
        sort(intervals.begin(), intervals.end());
        for(int i = 0; i < n; i++)
        {
            if(intervals[i][0] > left && intervals[i][1] > right)
            {
                left = intervals[i][0];
                ans++;
            }
            right = max(right, intervals[i][1]);
        }
        return ans;
    }
};  
