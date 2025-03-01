class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long ans = accumulate(batteries.begin(), batteries.end(), 0LL);
        priority_queue<int> maxHeap(batteries.begin(), batteries.end());
        while(!maxHeap.empty() && maxHeap.top() > ans/n)
        {
            ans -= maxHeap.top();
            maxHeap.pop();
            n--;
        }
        return ans/n;
    }
};
