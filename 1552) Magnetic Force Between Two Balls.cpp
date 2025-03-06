class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = position.size();
        sort(position.begin(), position.end());
        int left = 0;
        int right = position[n-1] - position[0];
        int mid = 0;
        int ans = 0;
        while(left < right)
        {
            mid = left + (right - left + 1)/2;
            int count = 1;
            int prev = position[0];
            for(int i = 1; i < n; i++)
            {
                if(position[i] - prev >= mid)
                {
                    prev = position[i];
                    count++;
                }
            }
            if(count >= m)
            {
                left = mid;
                ans = mid;
            }
            else
            {
                right = mid - 1;
            }
        }
        return ans;
    }
};
