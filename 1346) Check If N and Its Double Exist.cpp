class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        int n = nums.size();
        sort(nums.rbegin(), nums.rend());
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i!=j && nums[i]==2*nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};
