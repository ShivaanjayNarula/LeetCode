class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        set<double> st;
        int left = 0;
        int right = n-1;
        while(left < right)
        {
            st.insert((nums[left] + nums[right])/2.0);
            left++;
            right--;
        }
        int ans = st.size();
        return ans;
    }
};
