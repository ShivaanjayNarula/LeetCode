class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), check);
        int n = nums.size();
        return nums[n-k];
    }
    static bool check(string &a, string &b)
    {
        if(a.size() == b.size())
        {
            return a<b;
        }
        return a.size() < b.size();
    }
};
