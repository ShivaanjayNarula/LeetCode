class Solution {
public:
    vector<int> diStringMatch(string s) {
        int left = count(s.begin(), s.end(), 'D');
        int right = left;
        vector<int> ans = {left};
        for(auto ch : s)
        {
            if(ch == 'I')
            {
                right++;
                ans.push_back(right);
            }
            else
            {
                left--;
                ans.push_back(left);
            }
        }
        return ans;
    }
};
