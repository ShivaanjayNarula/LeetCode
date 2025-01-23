class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int check = 0;
        vector<int> ans;
        for(auto i : seq)
        {
            if(i == '(')
            {
                ans.push_back(check++ % 2);
            }
            else
            {
                ans.push_back(--check % 2);
            }
        }
        return ans;
    }
};
