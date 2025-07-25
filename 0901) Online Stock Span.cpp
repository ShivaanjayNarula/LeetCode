class StockSpanner {
public:
    stack<int> st;
    vector<int> nums;
    StockSpanner() {
        
    }
    
    int next(int price) {
        nums.push_back(price);
        int i = nums.size()-1;
        while(!st.empty() && price >= nums[st.top()])
        {
            st.pop();
        }
        int ans = 0;
        if(st.empty())
        {
            ans = nums.size();
        }
        else
        {
            ans = i - st.top();
        }
        st.push(i);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
