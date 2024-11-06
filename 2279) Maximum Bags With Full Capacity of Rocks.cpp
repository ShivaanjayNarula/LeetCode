class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int> space;
        for(int i = 0; i < n; i++)
        {
            space.push_back(capacity[i] - rocks[i]);
        }
        sort(space.begin(), space.end());
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans++;
            additionalRocks -= space[i];
            if(additionalRocks < 0)
            {
                ans-=1;
                break;
            }
        }
        return ans;
    }
};
