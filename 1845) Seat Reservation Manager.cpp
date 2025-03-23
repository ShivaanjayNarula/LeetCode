class SeatManager {
public:
    int last;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    SeatManager(int n) : last(0) {
    }
    
    int reserve() {
        if(minHeap.empty())
        {
            return ++last;
        }
        else
        {
            int seat = minHeap.top();
            minHeap.pop();
            return seat;
        }
    }
    
    void unreserve(int seatNumber) {
        if(seatNumber == last)
        {
            --last;
        }
        else
        {
            minHeap.push(seatNumber);
        }
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
