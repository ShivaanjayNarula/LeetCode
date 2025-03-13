class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = energy.size();
        int ans = INT_MIN;
        for(int i = n-1; i >= 0; i--)
        {
            if(i+k < n)
            {
                energy[i] += energy[i+k];
            }
            ans = max(ans, energy[i]);
        }
        return ans;
    }
};
