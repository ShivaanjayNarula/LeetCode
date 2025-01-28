class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        int left = 0;
        int right = n-1;
        while(left < right)
        {
            string temp = to_string(nums[left]) + to_string(nums[right]);
            ans += stoll(temp);
            left++;
            right--;
        }
        if(left == right)
        {
            ans += nums[left];
        }
        return ans;
    }
};
