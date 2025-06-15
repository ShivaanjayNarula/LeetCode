class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for(auto it : arr)
        {
            mp[it]++;
        }
        vector<int> freq;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            freq.push_back(it->second);
        }
        sort(freq.begin(), freq.end());
        int ans = 0;
        int removed = 0;
        int m = freq.size();
        int i = m-1;
        while(removed < n/2)
        {
            ans++;
            removed += freq[i--];
        }
        return ans;
    }
};
