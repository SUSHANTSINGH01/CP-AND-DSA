class Solution {
    int getLongestPrefix(String s) {
        // code here
        int n=s.length();
        int i=n-1;
        int j=0;
        int k=n-1;
        
        while(i<n && i>0){
            if(s.charAt(i)==s.charAt(j)){
                j++;
                i++;
            }else{
                j=0;
                k--;
                i=k;
            }
        }
        
        if(i==0)
        return -1;
        
        return k;
    }
}
