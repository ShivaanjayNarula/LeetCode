class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n = password.size();
        if(n < 8)
        {
            return false;
        }
        string unique = "!@#$%^&*()_+-";
        int lowercase = 0;
        int uppercase = 0;
        int digit = 0;
        int special = 0;
        for(int i = 0; i < n; i++)
        {
            if(i != 0 && password[i] == password[i-1])
            {
                return false;
            }
            if(password[i] >= 65 && password[i] <= 90)
            {
                lowercase++;
            }
            else if(password[i] >= 97 && password[i] <= 122)
            {
                uppercase++;
            }
            else if(password[i] >= 48 && password[i] <= 57)
            {
                digit++;
            }
            else if(unique.find(password[i]) != string::npos)
            {
                special++;
            }
        }
        if(lowercase > 0 && uppercase > 0 && digit > 0 && special > 0)
        {
            return true;
        }
        return false;
    }
};
