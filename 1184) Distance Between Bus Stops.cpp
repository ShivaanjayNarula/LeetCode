class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n = distance.size();
        int check1 = 0;
        int check2 = 0;
        if(start > destination)
        {
            swap(start, destination);
        }
        for(int i = 0; i < n; i++)
        {
            if(i >= start && i < destination)
            {
                check1 += distance[i];
            }
            else
            {
                check2 += distance[i];
            }
        }
        return min(check1, check2);
    }
};
