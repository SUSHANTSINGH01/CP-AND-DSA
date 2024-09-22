class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        
       int n=str.size();
       vector<int>lps(n,0);
	   int l=0;
	   int r=1;
	   
	   while(r<n){
	       if(str[l]==str[r]){
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
};
