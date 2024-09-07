class Solution {
  public:
    long long findNth(long long n) {
        // code here.
         
        long long int res=0;
        long long int mul=1;
       
        while(n>0){
            res=res+mul*(n%9);
            n=n/9;
            mul=mul*10;
        }
        
        return res;
    }
};
