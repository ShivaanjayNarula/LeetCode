class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        int n = arr.size();
        int one = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
            {
                one++;
            }
        }
        if(one == 0)
        {
            return {0, n-1};
        }
        if(one % 3 != 0)
        {
            return {-1, -1};
        }
        int count = one/3;
        int first = -1;
        int second = -1;
        int third = -1;
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
            {
                check++;
                if(check == 1)
                {
                    first = i;
                }
                else if(check == count + 1)
                {
                    second = i;
                }
                else if(check == 2 * count + 1)
                {
                    third = i;
                }
            }
        }
        while(first < n && second < n && third < n)
        {
            if(arr[first] == arr[second] && arr[second] == arr[third])
            {
                first++;
                second++;
                third++;
            }
            else
            {
                return {-1, -1};
            }
        }
        return {first-1, second};
    }
};
