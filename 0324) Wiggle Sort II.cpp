class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1(nums);
        sort(nums1.begin(), nums1.end());
        int i = n-1;
        int j = 0;
        int k = i/2 + 1;
        while(i >= 0)
        {
            if(i % 2 == 1)
            {
                nums[i] = nums1[k];
                k++;
            }
            else
            {
                nums[i] = nums1[j];
                j++;
            }
            i--;
        }
    }
};
