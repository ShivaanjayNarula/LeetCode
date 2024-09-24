class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        for(int i = 0; i < n; i++)
        {
            arr.push_back(nums[i]);
            arr.push_back(nums[i+n]);
        }
        return arr;
    }
};
