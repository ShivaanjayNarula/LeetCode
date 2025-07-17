class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string ans = "";
        for(int i = 0; i < n; i++)
        {
            ans += to_string(1 - (nums[i][i] - '0'));
        }
        return ans;
    }
};
