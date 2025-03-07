class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        long long minTime = *min_element(time.begin(), time.end());
        long long left = 1;
        long long right = minTime * totalTrips;
        while(left < right)
        {
            long long mid = left + (right - left)/2;
            long long add = 0;
            for(int i : time)
            {
                add += mid/i;
            }
            if(add < totalTrips)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
    }
};
