class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int check = 0;
        for(auto i : derived)
        {
            check ^= i;
        }
        if(check == 0)
        {
            return true;
        }
        return false;
    }
};
