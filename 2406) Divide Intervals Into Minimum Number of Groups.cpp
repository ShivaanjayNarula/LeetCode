class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(auto it : intervals)
        {
            int start = it[0];
            int end = it[1];
            if(!minHeap.empty() && minHeap.top() < start)
            {
                minHeap.pop();
            }
            minHeap.push(end);
        }
        return minHeap.size();
    }
};
