class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        int count = 0;
        int check = 0;
        if(sum % 3 == 0)
        {
            for(auto i : arr)
            {
                check += i;
                if(check == sum/3)
                {
                    count++;
                    check = 0;
                }
            }
        }
        if(count >= 3)
        {
            return true;
        }
        return false;
    }
};
