class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int big = nums[0];
        int small = nums[0];
        int ans = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] < 0)
            {
                swap(big, small);
            }
            big = max(nums[i], big * nums[i]);
            small = min(nums[i], small * nums[i]);
            ans = max(ans, big);
        }
        return ans;
    }
};
