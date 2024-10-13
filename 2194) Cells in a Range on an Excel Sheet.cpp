class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        char left = s[0];
        char right = s[3];
        while(left <= right)
        {
            int low = s[1] - '0';
            int high = s[4] - '0';
            while(low <= high)
            {
                ans.push_back(left + to_string(low));
                low++;
            }
            left++;
        }
        return ans;
    }
};
