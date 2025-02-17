class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int n1 = nums.size();
        long long add = 1;
        int ans = 0;
        int i = 0;
        while(add <= n)
        {
            if(i < n1 && nums[i] <= add)
            {
                add += nums[i];
                i++;
            }
            else
            {
                add = add << 1;
                ans++;
            }
        }
        return ans;
    }
};
