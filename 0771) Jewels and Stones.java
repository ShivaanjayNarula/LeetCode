class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int ans = 0;
        HashSet<Character> set= new HashSet<>();
        for(char ch : jewels.toCharArray())
        {
            set.add(ch);
        }
        for(char ch : stones.toCharArray())
        {
            if(set.contains(ch))
            {
                ans++;
            }
        }
        return ans;
    }
}
