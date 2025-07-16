class Solution {
public:
    int numTilePossibilities(string tiles) {
        int n = tiles.size();
        if(n == 1)
        {
            return 1;
        }
        int ans = 0;
        vector<int> freq(26, 0);
        for(int i = 0; i < n; i++)
        {
            char ch = tiles[i];
            if(freq[ch - 'A'] == 0)
            {
                freq[ch - 'A'] = 1;
                tiles.erase(i, 1);
                ans += numTilePossibilities(tiles) + 1;
                tiles.insert(tiles.begin() + i, ch);
            }
        }
        return ans;
    }
};
