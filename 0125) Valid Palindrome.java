class Solution {
    public boolean isPalindrome(String s) {
        int n = s.length();
        StringBuilder check = new StringBuilder();
        for(int i = 0; i < n; i++)
        {
            char ch = s.charAt(i);
            if(Character.isLetterOrDigit(ch))
            {
                check.append(Character.toLowerCase(ch));
            }
        }
        n = check.length();
        int left = 0;
        int right = n-1;
        while(left < right)
        {
            if(check.charAt(left) != check.charAt(right))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
