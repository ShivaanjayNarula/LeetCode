class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume;
        long long c = 1;
        volume = length * c * width * height;
        int a, b;
        a = 0;
        b = 0;
        if(volume >= 1000000000 || (length >= 10000 || width >= 10000 || height >= 10000))
        {
            a = a + 1;
        }
        if(mass >= 100)
        {
            b = b + 1;
        }

        if(a == 1 && b == 1)
        {
            return "Both";
        }
        else if(a == 0 && b == 0)
        {
            return "Neither";
        }
        else if(a == 0 && b == 1)
        {
            return "Heavy";
        }
        else if(a == 1 && b == 0)
        {
            return "Bulky";
        }
        return 0;
    }
};
