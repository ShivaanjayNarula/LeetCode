class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(asteroids[i] > 0 || ans.empty() || ans.back() < 0)
            {
                ans.push_back(asteroids[i]);
            }
            else if(ans.back() <= -asteroids[i])
            {
                if(ans.back() < -asteroids[i])
                {
                    i--;
                }
                ans.pop_back();
            }
        }
        return ans;
    }
};
