class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int n = removable.size();
        int left = 0;
        int right = n;
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(check(s, p, removable, mid))
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
        return right;
    }
    bool check(string s, string &p, vector<int> &removable, int mid)
    {
        int m = s.size();
        int n = p.size();
        int count = 0;
        for(int i = 0; i < mid; i++)
        {
            s[removable[i]] = '#';
        }
        int i = 0;
        int j = 0;
        while(i < m && j < n)
        {
            if(s[i] == p[j])
            {
                j++;
                count++;
            }
            i++;
        }
        if(count == n)
        {
            return true;
        }
        return false;
    }
};
