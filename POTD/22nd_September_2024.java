class Solution {
    int lps(String str) {
        // code here
        
       int n=str.length();
       int[] lps=new int[n];
  	   int l=0;
  	   int r=1;
	   
	   while(r<n){
	       if(str.charAt(l)==str.charAt(r)){
	           lps[r]=l+1;
	           r++;
	           l++;
	       }
	       else if(l!=0)
	       l=lps[l-1];
	       else{
	           lps[r]=0;
	           r++;
	       }
	   }
	   return l;
    }
}
