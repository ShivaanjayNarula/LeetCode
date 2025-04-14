class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int check = abs(target[0]) + abs(target[1]);
        for(auto i : ghosts)
        {
            if(abs(i[0] - target[0]) + abs(i[1] - target[1]) <= check)
            {
                return false;
            }
        }
        return true;
    }
};
