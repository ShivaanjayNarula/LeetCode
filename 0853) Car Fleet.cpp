class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> nums;
        for(int i = 0; i < n; i++)
        {
            nums.push_back({position[i], speed[i]});
        }
        sort(nums.begin(), nums.end());
        vector<double> time;
        for(int i = 0; i < n; i++)
        {   
            double check = (double)(target-nums[i].first)/(double)nums[i].second;
            time.push_back(check);
        }
        stack<double> st;
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && time[i] >= st.top())
            {
                st.pop();
            }
            st.push(time[i]);
        }
        return st.size();
    }
};
