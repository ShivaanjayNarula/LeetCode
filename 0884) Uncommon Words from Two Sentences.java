class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        String s = s1 + " " + s2;
        Map<String, Integer> mp = new HashMap<>();
        String[] str = s.split(" ");
        for(String temp : str)
        {
            mp.put(temp, mp.getOrDefault(temp, 0) + 1);
        }
        List<String> ans = new ArrayList<>();
        for(Map.Entry<String, Integer> it : mp.entrySet())
        {
            if(it.getValue() == 1)
            {
                ans.add(it.getKey());
            }
        }
        return ans.toArray(new String[0]);
    }
}
