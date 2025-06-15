class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        long long ans = 0;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++)
        {
            pq.push(gifts[i]);
        }
        while(k--)
        {
            int temp = pq.top();
            pq.pop();
            pq.push(sqrt(temp));
        }
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};
