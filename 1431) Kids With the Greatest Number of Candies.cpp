class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int check = *max_element(candies.begin(), candies.end());
        vector<bool> ans;
        for(int i = 0; i < n; i++)
        {
            bool a;
            if(candies[i] + extraCandies >= check)
            {
                a = true;
            }
            else
            {
                a = false;
            }
            ans.push_back(a);
        }
        return ans;
    }
};
