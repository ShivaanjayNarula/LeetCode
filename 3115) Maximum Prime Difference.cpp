class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        for(; start < end; start++)
        {
            if(isPrime(nums[start]))
            {
                break;
            }
        }
        for(; end >= start; end--)
        {
            if(isPrime(nums[end]))
            {
                break;
            }
        }
        return end - start;
    }
    bool isPrime(int n)
    {
        if(n < 2)
        {
            return false;
        }
        for(int i = 2; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};
