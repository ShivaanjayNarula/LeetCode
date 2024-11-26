class Solution {
public:
    int countTestedDevices(vector<int>& battery) {
        int n = battery.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(battery[i] > 0)
            {
                ans++;
                for(int j = i+1; j < n; j++)
                {
                    battery[j]--;
                }
            }
        }
        return ans;
    }
};
