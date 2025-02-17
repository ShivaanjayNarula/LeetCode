class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int, int>> mp(n);
        for(int i = 0; i < n; i++)
        {
            mp[i] = {capital[i], profits[i]};
        }
        sort(mp.begin(), mp.end());
        priority_queue<int> maxHeap;
        int i = 0;
        while(k--)
        {
            while(i < n && mp[i].first <= w)
            {
                maxHeap.push(mp[i].second);
                i++;
            }
            if(maxHeap.empty())
            {
                break;
            }
            w += maxHeap.top();
            maxHeap.pop();
        }
        return w;
    }
};
