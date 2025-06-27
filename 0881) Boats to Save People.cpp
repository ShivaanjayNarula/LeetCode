class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int ans = 0;
        sort(people.begin(), people.end());
        int left = 0;
        int right = n-1;
        while(left <= right)
        {
            if(people[left] + people[right] <= limit)
            {
                left++;
            }
            ans++;
            right--;
        }
        return ans;
    }
};
