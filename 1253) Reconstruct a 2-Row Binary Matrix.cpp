class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int n = colsum.size();
        vector<int> nums1;
        vector<int> nums2;
        for(int i = 0; i < n; i++)
        {
            if(colsum[i] == 0)
            {
                nums1.push_back(0);
                nums2.push_back(0);
            }
            else if(colsum[i] == 2)
            {
                nums1.push_back(1);
                nums2.push_back(1);
                upper--;
                lower--;
            }
            else if(colsum[i] == 1)
            {
                if(upper >= lower)
                {
                    nums1.push_back(1);
                    nums2.push_back(0);
                    upper--;
                }
                else
                {
                    nums1.push_back(0);
                    nums2.push_back(1);
                    lower--;
                }
            }
        }
        if(lower != 0 || upper != 0)
        {
            return {};
        }
        return {nums1, nums2};
    }
};
