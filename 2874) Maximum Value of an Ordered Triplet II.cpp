class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)
        {
            return 0;
        }
        long long ans = 0;
        long long maxi = 0;
        long long maxdiff = 0;
        for(long long it : nums)
        {
            ans = max(ans, maxdiff * it);
            maxdiff = max(maxdiff, maxi - it);
            maxi = max(maxi, it);
            
        }
        return ans;
    }
};
