class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> a;
        vector<int> b;
        a.push_back(nums[0]);
        b.push_back(nums[1]);
        for(int i = 2; i < n; i++)
        {
            if(a.back() > b.back())
            {
                a.push_back(nums[i]);
            }
            else
            {
                b.push_back(nums[i]);
            }
        }
        ans = a;
        for(auto i : b)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
