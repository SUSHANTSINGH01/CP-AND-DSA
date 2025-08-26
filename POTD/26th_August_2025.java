class Solution {
    public boolean isSubSeq(String s1, String s2) {
        // code here
        int st = 0;
        int n = s1.length();
        int m = s2.length();
        int f = 0;
        for(int i=0;i<n;i++){
            f=0;
            for(int j=st;j<m;j++){
                if(s1.charAt(i)==s2.charAt(j)){
                    st=j;
                    f=1;
                    break;
                }
            }
            
            if(f==0)
            return false;
            
            if(i==n-1 && f==1)
            return true;
        }
        
        return false;
    }
};
