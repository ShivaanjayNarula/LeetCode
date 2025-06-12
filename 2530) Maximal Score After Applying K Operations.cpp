class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0;
        priority_queue<int> maxHeap(nums.begin(), nums.end());
        while(!maxHeap.empty() && k--)
        {
            int i = maxHeap.top();
            ans += i;
            maxHeap.pop();
            maxHeap.push((i/3) + (i % 3 != 0));
        }
        return ans;
    }
};
