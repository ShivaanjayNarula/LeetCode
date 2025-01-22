class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> count;
        for(auto i : nums)
        {
            count[i]++;
        }
        for(auto i : count)
        {
            if(i.second > 2)
            {
                return false;
            }
        }
        return true;
    }
};
