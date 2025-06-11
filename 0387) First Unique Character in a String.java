class Solution {
    public int firstUniqChar(String s) {
        char[] ch = s.toCharArray();
        int n = ch.length;
        Map<Character, Integer> mp = new HashMap<>();
        for(int i = 0; i < n; i++)
        {
            mp.put(ch[i], mp.getOrDefault(ch[i], 0) + 1);
        }
        for(int i = 0; i < n; i++)
        {
            if(mp.get(ch[i]) == 1)
            {
                return i;
            }
        }
        return -1;
    }
}
