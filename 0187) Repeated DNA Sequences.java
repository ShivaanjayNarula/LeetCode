class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        int n = s.length();
        List<String> ans = new ArrayList<>();
        if(n < 10)
        {
            return ans;
        }
        HashMap<String, Integer> mp = new HashMap<>();
        for(int i = 0; i <= n-10; i++)
        {
            String check = s.substring(i, i+10);
            mp.put(check, mp.getOrDefault(check, 0) + 1);
        }
        for(HashMap.Entry<String, Integer> it : mp.entrySet())
        {
            if(it.getValue() > 1)
            {
                ans.add(it.getKey());
            }
        }
        return ans;
    }
}
