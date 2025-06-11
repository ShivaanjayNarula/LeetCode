class Solution {
public:
    string largestNumber(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = nums.size();
        string ans = "";
        sort(nums.begin(), nums.end(), check);
        for(int i = 0; i < n; i++)
        {
            ans += to_string(nums[i]);
        }
        if(ans[0] == '0')
        {
            return "0";
        }
        return ans;
    }
    static bool check(int a, int b)
    {
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    }
};
