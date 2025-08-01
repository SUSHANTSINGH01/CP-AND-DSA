class Solution {
    public int countBalanced(String[] arr) {
        
        // code here
        int n = arr.length;
        int v = 0;
        Map<Integer, Integer> mp = new HashMap<>();
        int res = 0;
        mp.put(0,1);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<arr[i].length();j++){
                if(arr[i].charAt(j) == 'a' || arr[i].charAt(j) == 'e' ||
                arr[i].charAt(j) == 'i' || arr[i].charAt(j) == 'o' || 
                arr[i].charAt(j) == 'u')
                v++;
                else
                v--;
            }
            
            if(mp.containsKey(v))
            res += mp.get(v);
            
            mp.put(v, mp.getOrDefault(v,0)+1);
        }
        return res;
    }
}
