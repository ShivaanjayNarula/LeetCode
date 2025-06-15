class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size();
        vector<int> start;
        vector<int> end;
        for(int i = 0; i < n; i++)
        {
            start.push_back(nums[i] - k);
            end.push_back(nums[i] + k);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int left1 = 0;
        int left2 = 0;
        int ans = 0;
        int check = 0;
        while(left1 < n && left2 < n)
        {
            if(start[left1] <= end[left2])
            {
                left1++;
                check++;
            }
            else
            {
                left2++;
                check--;
            }
            ans = max(ans, check);
        }
        return ans;
    }
};
