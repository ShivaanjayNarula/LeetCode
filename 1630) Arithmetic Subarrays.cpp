class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int n = nums.size();
        int left = l.size();
        int right = r.size();
        for(int i = 0; i < left; i++)
        {
            vector<int> add(begin(nums) + l[i], begin(nums) + r[i] + 1);
            sort(add.begin(), add.end());
            int n1 = add.size();
            bool check = true;
            int diff = add[1] - add[0];
            for(int j = 2; j < n1; j++)
            {
                if(add[j] - add[j-1] != diff)
                {
                    check = false;
                    break;
                }
            }
            ans.push_back(check);
        }
        return ans; 
    }
};
