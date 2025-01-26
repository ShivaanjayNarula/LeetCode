class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int left = min_element(nums.begin(), nums.end()) - nums.begin();
        int right = max_element(nums.begin(), nums.end()) - nums.begin();
        int n = nums.size();
        if(left < right)
        {
            swap(left, right);
        }
        int check1 = left + 1;
        int check2 = n - right;
        int check3 = right + 1 + n - left;
        return min({check1, check2, check3});
    }
};
