class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxHeap(piles.begin(), piles.end());
        while(k-- > 0)
        {
            int i = maxHeap.top();
            maxHeap.pop();
            maxHeap.push(i - i/2);
        }
        int ans = 0;
        while(maxHeap.size() > 0)
        {
            ans += maxHeap.top();
            maxHeap.pop();
        }
        return ans;
    }
};
