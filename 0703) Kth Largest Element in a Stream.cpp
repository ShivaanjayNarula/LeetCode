class KthLargest {
public:
    int n;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    KthLargest(int k, vector<int>& nums) {
        n = k;
        for(auto it : nums)
        {
            add(it);
        }
    }
    
    int add(int val) {
        if(minHeap.size() < n)
        {
            minHeap.push(val);
        }
        else if(val > minHeap.top())
        {
            minHeap.pop();
            minHeap.push(val);
        }
        return minHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
