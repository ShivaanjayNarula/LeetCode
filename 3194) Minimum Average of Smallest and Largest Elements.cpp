class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<double> check;
        for(int i = 0; i < n/2; i++)
        {
            check.push_back((nums[i] + nums[n-i-1])/2.0);
        }
        double ans = *min_element(check.begin(), check.end());
        return ans;
    }
};
