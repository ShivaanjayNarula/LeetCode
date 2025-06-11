class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        unordered_set<char> j(jewels.begin(), jewels.end());
        for(char i : stones)
        {
            if(j.count(i))
            {
                ans++;
            }
        }
        return ans;
    }
};
