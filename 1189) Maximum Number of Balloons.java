class Solution {
    public int maxNumberOfBalloons(String text) {
        HashMap<Character, Integer> mp = new HashMap<>();
        mp.put('b', 0);
        mp.put('a', 0);
        mp.put('l', 0);
        mp.put('o', 0);
        mp.put('n', 0);
        for(char ch : text.toCharArray())
        {
            if(mp.containsKey(ch))
            {
                mp.put(ch, mp.get(ch) + 1);
            }
        }
        int ans = 0;
        while(mp.get('b') >= 1 && mp.get('a') >= 1 && mp.get('l') >= 2 && mp.get('o') >= 2 && mp.get('n') >= 1)
        {
            ans++;
            mp.put('b', mp.get('b') - 1);
            mp.put('a', mp.get('a') - 1);
            mp.put('l', mp.get('l') - 2);
            mp.put('o', mp.get('o') - 2);
            mp.put('n', mp.get('n') - 1);
        }
        return ans;
    }
}
