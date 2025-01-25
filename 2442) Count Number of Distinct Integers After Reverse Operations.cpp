class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            mp.insert(nums[i]);
            int j = 0;
            while(nums[i])
            {
                j = j * 10 + (nums[i] % 10);
                nums[i] /= 10;
            }
            mp.insert(j);
        }
        return mp.size();
    }
};
