class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size();
        long long left = 0;
        long long right = 0;
        for(int i = 0; i < n; i++)
        {
            right += nums[i];
        }
        int mini = INT_MAX;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            left += nums[i];
            right -= nums[i];
            long long first = (left/(i+1));
            long long last = 0;
            if(i < n-1)
            {
                last = right / (n-i-1);
            }
            int check = abs(first - last);
            if(check < mini)
            {
                mini = check;
                ans = i;
            }
        }
        return ans;
    }
};
