class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int> ans;
        vector<vector<int>> temp;
        int n = restaurants.size();
        for(int i = 0; i < n; i++)
        {
            if(!restaurants[i][2] && veganFriendly)
            {
                continue;
            }
            if(restaurants[i][3] > maxPrice)
            {
                continue;
            }
            if(restaurants[i][4] > maxDistance)
            {
                continue;
            }
            temp.push_back(restaurants[i]);
        }
        sort(temp.begin(), temp.end(), [](auto& a, auto& b)
        {
            return a[1] != b[1] ? a[1] > b[1] : a[0] > b[0];
        });
        int m = temp.size();
        for(int i = 0; i < m; i++)
        {
            ans.push_back(temp[i][0]);
        }
        return ans;
    }
};
