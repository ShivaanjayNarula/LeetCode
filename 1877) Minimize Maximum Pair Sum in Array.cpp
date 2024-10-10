class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int k = n-1;
        int sum = 0;
        int ma= 0;
        for(int i = 0; i < n/2; i++)
        {
            sum = nums[i] + nums[k];
            k--;
            ma = max(sum, ma);
        }
        return ma;
        return 0;
    }
    
};
