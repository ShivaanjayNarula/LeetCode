class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int petrol = 0;
        int balance = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            balance += gas[i] - cost[i];
            if(balance < 0)
            {
                petrol += balance;
                ans = i+1;
                balance = 0;
            }
        }
        if(petrol+balance >= 0)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }
};
