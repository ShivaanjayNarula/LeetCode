class Solution {
    public String firstPalindrome(String[] words) {
        int n = words.length;
        for(int i = 0; i < n; i++)
        {
            StringBuilder s = new StringBuilder(words[i]);
            s.reverse();
            if(s.toString().equals(words[i]))
            {
                return s.toString();
            }
        }
        return "";
    }
}
