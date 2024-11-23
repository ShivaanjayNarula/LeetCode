class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd;
        vector<int> even;
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.rbegin(), odd.rend());
        vector<int> ans;
        for(int i = 0; i < n/2; i++)
        {
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        if(n % 2 != 0)
        {
            ans.push_back(even[n/2]);
        }
        return ans;
    }
};
