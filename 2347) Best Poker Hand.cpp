class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int, int> mp1;
        unordered_map<char, int> mp2;
        for(auto it : ranks)
        {
            mp1[it]++;
        }
        for(auto it : suits)
        {
            mp2[it]++;
        }
        string ans = "High Card";
        for(auto it : mp2)
        {
            if(it.second == 5)
            {
                ans = "Flush";
            }
        }
        for(auto it : mp1)
        {
            if(it.second >= 3)
            {
                ans = "Three of a Kind";
                break;
            }
            else if(it.second == 2)
            {
                ans = "Pair";
            }
        }
        return ans;
    }
};
