class Solution {
public:
    int strongPasswordChecker(string password) {
        int n = password.size();
        bool digit = false;
        bool lower = false;
        bool upper = false;
        for(char ch : password)
        {
            if(isdigit(ch))
            {
                digit = true;
            }
            if(islower(ch))
            {
                lower = true;
            }
            if(isupper(ch))
            {
                upper = true;
            }
        }
        int missing = !digit + !lower + !upper;
        if(n < 6)
        {
            return max(6 - n, missing);
        }
        int excess = max(0, n - 20);
        int replacements = 0;
        vector<int> repeating;
        for(int i = 0; i < n;)
        {
            int j = i;
            while(j < n && password[j] == password[i])
            {
                j++;
            }
            if(j - i >= 3)
            {
                repeating.push_back(j - i);
            }
            i = j;
        }
        int deletions = excess;
        int i = 0;
        int m = repeating.size();
        while(i < m && excess > 0)
        {
            if(repeating[i] % 3 == 0)
            {
                repeating[i]--;
                excess--;
            }
            i++;
        }
        i = 0;
        while(i < repeating.size() && excess > 0)
        {
            if(repeating[i] % 3 == 1 && excess >= 2)
            {
                repeating[i] -= 2;
                excess -= 2;
            }
            i++;
        }
        for(auto it : repeating)
        {
            if(excess > 0)
            {
                int remove = min(it - 2, excess);
                it -= remove;
                excess -= remove;
            }
            replacements += it / 3;
        }
        int ans = deletions + max(missing, replacements);
        return ans;
    }
};
