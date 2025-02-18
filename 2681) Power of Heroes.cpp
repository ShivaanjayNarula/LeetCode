class Solution {
public:
    int sumOfPower(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long ans = 0;
        long long add = 0;
        long long base = 1e9 + 7;
        for(auto i : nums)
        {
            ans = (ans + (add + i) * i % base * i % base) % base;
            add = (add * 2 + i) % base;
        }
        return ans;
    }
};
