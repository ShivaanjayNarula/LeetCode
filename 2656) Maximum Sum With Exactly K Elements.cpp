class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int a = *max_element(nums.begin(), nums.end());
        int add = 0;
        for(int i = 0; i < k; i++)
        {
            add += i;
        }
        int ans = k*a + add;
        return ans;
    }
};
