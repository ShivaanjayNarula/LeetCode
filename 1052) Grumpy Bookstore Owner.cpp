class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = customers.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(i < minutes)
            {
                ans += customers[i];
            }
            else
            {
                ans += customers[i] *(1 - grumpy[i]);
            }
        }
        int check = ans;
        for(int i = minutes; i < n; i++)
        {
            int left_index = i - minutes;
            int left_num = customers[left_index];
            check += customers[i] * grumpy[i];
            check -= customers[left_index] * grumpy[left_index];
            ans = max(ans, check);
        }
        return ans;
    }
};
