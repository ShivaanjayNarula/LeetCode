class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        while(k--)
        {
            int check = pq.top();
            pq.pop();
            pq.push(check + 1);
        }
        long long ans = 1;
        while(!pq.empty())
        {
            ans = (ans % 1000000007) * (pq.top() % 1000000007);
            pq.pop();
        }
        return ans % 1000000007;
    }
};
