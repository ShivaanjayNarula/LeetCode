class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int p = processorTime.size();
        int t = tasks.size();
        sort(processorTime.rbegin(), processorTime.rend());
        sort(tasks.begin(), tasks.end());
        int ans = 0;
        int i = 0;
        int j = 0;
        while(i < t)
        {
            int check = t/p;
            while(check--)
            {
                ans = max(ans, processorTime[j] + tasks[i++]);
            }
            j++;
        }
        return ans;
    }
};
