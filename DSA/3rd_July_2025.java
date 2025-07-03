class Solution {
    public int longestKSubstr(String s, int k) {
        // code here
        int n=s.length();
        Map<Character,Integer>mp=new HashMap<>();
        int res=0;
        int j=0;
        
        for(int i=0;i<n;i++)
        {
            mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
            while(mp.size()>k)
            {
                mp.put(s.charAt(j),mp.get(s.charAt(j))-1);
                if(mp.get(s.charAt(j))==0)
                mp.remove(s.charAt(j));
                j++;
            }
            res=Math.max(res,i-j+1);
        }
        
        if(mp.size()<k)  
        return -1;
        
        return res;
    }
}
