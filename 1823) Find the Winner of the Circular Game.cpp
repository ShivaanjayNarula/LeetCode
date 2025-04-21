class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> nums;
        for(int i = 0; i < n; i++)
        {
            nums.push_back(i+1);
        }
        int remove = 0;
        return check(nums, remove, k);
    }
    int check(vector<int> &nums, int remove, int k)
    {
        int n = nums.size();
        if(n == 1)
        {
            return nums[0];
        }
        remove = (remove + k - 1) % n;
        nums.erase(nums.begin() + remove);
        return check(nums, remove, k);
    }
};
