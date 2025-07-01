class Solution {
    public int substrCount(String s, int k) {
        // code here
        Map<Character, Integer> mp=new HashMap<>();
        int res=0;
        int n=s.length();
    
        for(int i=0;i<n;i++){
         
            mp.put(s.charAt(i), mp.getOrDefault(s.charAt(i),0)+1);
    
            if(i>=k) {
                char temp=s.charAt(i-k);
                mp.put(temp,mp.get(temp)-1);
                
                if(mp.get(temp) == 0) {
                    mp.remove(temp);
                }
            }
    
            if(i>=k-1 && mp.size()==k-1){
                res++;
            }
        }
    
        return res;
    }
}
