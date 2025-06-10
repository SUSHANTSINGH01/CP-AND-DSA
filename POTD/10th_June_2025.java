class Solution {
    int countStrings(String s) {
        // code here
        Map<Character,Integer> mp = new HashMap<>();
        int n=s.length();
        int res=0;
        boolean f=false;
        
        for(int i=0;i<n;i++){
            mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
        }
        
        for(int i=0;i<n;i++){
            res+=(n-mp.get(s.charAt(i)));
            if(mp.get(s.charAt(i))>1)
            f=true;
        }
        
        if(f==false)
        return res/2;
        else
        return (res/2)+1;
        
    }
}
