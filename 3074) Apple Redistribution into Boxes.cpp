class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total = 0;
        for(int i : apple)
        {
            total += i;
        }
        sort(capacity.rbegin(), capacity.rend());
        int ans = 0;
        int i = 0;
        while(total > 0)
        {
            total -= capacity[i];
            i++;
            ans++;
        }
        return ans;
    }
};
