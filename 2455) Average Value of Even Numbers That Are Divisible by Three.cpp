class Solution {
public:
    int averageValue(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = nums.size();
        int ans = 0;
        int check = 0;
        for(auto i : nums)
        {
            if(i % 2 == 0 && i % 3 == 0)
            {
                check++;
                ans += i;
            }
        }
        if(check == 0)
        {
            return 0;
        }
        ans /= check;
        return ans;
    }
};
