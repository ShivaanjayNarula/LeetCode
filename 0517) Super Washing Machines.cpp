class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int n = machines.size();
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += machines[i];
        }
        if(sum % n != 0)
        {
            return -1;
        }
        int avg = sum/n;
        int ans = 0;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            int check = machines[i] - avg;
            count += check;
            ans = max({ans, abs(count), check});
        }
        return ans;
    }
};
