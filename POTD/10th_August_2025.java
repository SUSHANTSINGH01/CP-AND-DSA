class Solution {
    
    int lengthOfPal(int l,int r,int n,String str){
        while(l>=0 && r<n && str.charAt(l)==str.charAt(r)){
            l--;
            r++;
        }
        return (r-l-1);
    }

    public int countPS(String s) {
        // code here
        int n=s.length();
        int res=0;

        for(int i=0;i<n;i++){
            int odd=lengthOfPal(i,i,n,s);
            int even=lengthOfPal(i,i+1,n,s);
    
            if(odd>=2)
            res+=(odd/2);
            if(even>=2)
            res+=(even/2);
            
        }
        
        return res;
    }
}
