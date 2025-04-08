class Solution {
public:
    int findNumbers(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = nums.size();
        int ans = 0;
        for(auto i : nums)
        {
            if(check(i))
            {
                ans++;
            }
        }
        return ans;
    }
    bool check(int n)
    {
        int check = 0;
        while(n)
        {
            n /= 10;
            check++;
        }
        if(check % 2 == 0)
        {
            return true;
        }
        return false;
    }
};
