class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char, int> mp;
        for(auto i : s)
        {
            mp[i]++;
        }
        priority_queue<pair<int, int>> maxHeap;
        for(auto it : mp)
        {
            maxHeap.push({it.second, it.first});
        }
        while(!maxHeap.empty())
        {
            int n = maxHeap.top().first;
            while(n--)
            {
                ans += maxHeap.top().second;
            }
            maxHeap.pop();
        }
        return ans;
    }
};
