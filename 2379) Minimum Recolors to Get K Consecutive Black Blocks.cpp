class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int i = 0;
        int j = 0;
        int ans = INT_MAX;
        int check = 0;
        while(j < n)
        {
            if(blocks[j] == 'W')
            {
                check++;
            }
            if(j - i + 1 >= k)
            {
                ans = min(ans, check);
                if(blocks[i] == 'W')
                {
                    check--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
