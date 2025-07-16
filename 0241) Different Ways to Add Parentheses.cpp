class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        int n = expression.size();
        vector<int> ans;
        helper(0, n-1, expression, ans);
        return ans;
    }
    void helper(int left, int right, string &s, vector<int> &ans)
    {
        bool isNumber = true;
        for(int i = left; i <= right; i++)
        {
            char ch = s[i];
            if(ch == '+' || ch == '-' || ch == '*')
            {
                isNumber = false;
                vector<int> nums1;
                vector<int> nums2;
                helper(left, i-1, s, nums1);
                helper(i+1, right, s, nums2);
                for(auto it1 : nums1)
                {
                    for(auto it2 : nums2)
                    {
                        if(ch == '+')
                        {
                            ans.push_back(it1 + it2);
                        }
                        if(ch == '-')
                        {
                            ans.push_back(it1 - it2);
                        }
                        if(ch == '*')
                        {
                            ans.push_back(it1 * it2);
                        }
                    }
                }
            }
        }
        if(isNumber)
        {
            ans.push_back(stoi(s.substr(left, right-left+1)));
        }
    }
};
