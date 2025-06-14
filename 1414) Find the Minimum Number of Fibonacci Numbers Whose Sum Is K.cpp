class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> nums{1, 1};
        int add = 2;
        while(add <= k)
        {
            nums.push_back(add);
            int n = nums.size();
            add = nums[n-1] + nums[n-2];
        }
        int ans = 0;
        int n = nums.size();
        while(k > 0)
        {
            while(n-1 >= 0 && nums[n-1] > k)
            {
                n--;
            }
            k -= nums[n-1];
            ans++;
        }
        return ans;
    }
};
