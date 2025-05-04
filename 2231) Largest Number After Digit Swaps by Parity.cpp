class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        priority_queue<int> odd;
        priority_queue<int> even;
        for(char ch : s)
        {
            if((ch - '0') % 2 == 0)
            {
                even.push(ch - '0');
            }
            else
            {
                odd.push(ch - '0');
            }
        }
        for(char &ch : s)
        {
            if((ch - '0') % 2 == 0)
            {
                ch = even.top() + '0';
                even.pop();
            }
            else
            {
                ch = odd.top() + '0';
                odd.pop();
            }
        }
        int ans = stoi(s);
        return ans;
    }
};
