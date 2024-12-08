class Solution {
public:
    string complexNumberMultiply(string nums1, string nums2) {
        string ans = "";
        int a = 0;
        int b = 0;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < n; i++)
        {
            if(nums1[i] == '+')
            {
                a = i;
                break;
            }
        }
        for(int i = 0; i < m; i++)
        {
            if(nums2[i] == '+')
            {
                b = i;
                break;
            }
        }
        int i, ii, iii, iv;
        i = stoi(nums1.substr(0, a));
        ii = stoi(nums1.substr(a+1));
        iii = stoi(nums2.substr(0, b));
        iv = stoi(nums2.substr(b+1));
        int real = i*iii - ii*iv;
        int imag = ii*iii + i*iv;
        ans += to_string(real);
        ans += "+";
        ans += to_string(imag);
        ans += "i";
        return ans;
    }
};
