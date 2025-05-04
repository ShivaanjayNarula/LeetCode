class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int count[201] = {};
        for(auto i : nums)
        {
            count[i+100]++;
        }
        sort(begin(nums), end(nums), [&](int a, int b)
        {
            if(count[a+100] == count[b+100])
            {
                return a > b;
            }
            else
            {
                return count[a+100] < count[b+100];
            }
        });
        return nums;
    }
};
