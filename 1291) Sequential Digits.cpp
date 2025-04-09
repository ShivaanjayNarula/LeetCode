class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for(int i = 1; i <= 9; i++)
        {
            int check = i;
            while(check <= high)
            {
                if(check >= low)
                {
                    ans.push_back(check);
                }
                if((check + 1) % 10 > check % 10)
                {
                    check = check * 10 + check % 10 + 1;
                }
                else
                {
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
