class Solution {
public:
    double trimMean(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = n / 20;
        double sum = 0;
        int k = n - 2 * i;
        for(int j = i; j < n-i; j++)
        {
            sum = sum + nums[j];
            
        }
        return sum/k;
    }
};
