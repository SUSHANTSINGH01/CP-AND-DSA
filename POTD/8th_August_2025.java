class Solution {
    int getLPSLength(String s) {
        // code here
        int n = s.length();
        int[] lps = new int[n];
        
        int j = 0;
        int i = 1;
        lps[0] = 0;
        while(i<n){
            if(s.charAt(i)==s.charAt(j)){
                j++;
                lps[i]=j;
                i++;
            }else{
                if(j!=0){
                    j=lps[j-1];
                }else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        
        if(lps[n-1]==n)
        return n-1;
        
        return lps[n-1];
        
    }
}
