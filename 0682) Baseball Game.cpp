class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        for(auto i : operations)
        {
            if(i == "C")
            {
                if(!ans.empty())
                {
                    ans.pop_back();
                }
            }
            else if(i == "D")
            {
                if(!ans.empty())
                {
                    ans.push_back(2 * ans.back());
                }
            }
            else if(i == "+")
            {
                int n = ans.size();
                if(n >= 2)
                {
                    ans.push_back(ans[n-1] + ans[n-2]);
                }
            }
            else
            {
                ans.push_back(stoi(i));
            }
        }
        return accumulate(ans.begin(), ans.end(), 0);
    }
};
