class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++)
        {
            long long check = 0;
            int left = 0;
            int right = m-1;
            while(left <= right)
            {
                int mid = left + (right - left)/2;
                check = (long long)spells[i] * (long long)potions[mid];
                if(check >= success)
                {
                    right = mid-1;
                }
                else
                {
                    left = mid+1;
                }
            }
            ans[i] += m - left;
        }
        return ans;
    }
};
