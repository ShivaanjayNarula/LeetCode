class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> small;
        vector<int> large;
        vector<int> equal;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] < pivot)
            {
                small.push_back(nums[i]);
            }
            else if(nums[i] > pivot)
            {
                large.push_back(nums[i]);
            }
            else
            {
                equal.push_back(nums[i]);
            }
        }
        vector<int> ans;
        ans.insert(ans.end(), small.begin(), small.end());
        ans.insert(ans.end(), equal.begin(), equal.end());
        ans.insert(ans.end(), large.begin(), large.end());
        return ans;
    }
};
