class Solution {
    public boolean stringStack(String pat, String tar) {
        // code here
       
        
        int n=pat.length();
        int m=tar.length();
        
        int i=n-1;
        int j=m-1;
        
        while(i>=0 && j>=0){
            if(tar.charAt(j)==pat.charAt(i)){
                j--;
                i--;
            }else
            i-=2;
        }
        
        if(j<0)
        return true;
        
        return false;
    }
}
