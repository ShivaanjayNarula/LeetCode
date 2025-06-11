class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder ans = new StringBuilder();
        Arrays.sort(strs);
        int n = strs.length;
        String first = strs[0];
        String last = strs[n-1];
        for(int i = 0; i < Math.min(first.length(), last.length()); i++)
        {
            if(first.charAt(i) != last.charAt(i))
            {
                return ans.toString();
            }
            ans.append(first.charAt(i));
        }
        return ans.toString();
    }
}
