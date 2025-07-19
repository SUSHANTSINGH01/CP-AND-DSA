class Solution {
    public int vowelCount(String s) {
        // code here
        int res = 1;
        int a = 0;
        int e = 0;
        int ii = 0;
        int o = 0;
        int u = 0;
        
        int c=0;
        int n=s.length();
        
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='a'){
               a++;
               c+=(a==1)?1:0;
            }
            
            
            if(s.charAt(i)=='e'){
               e++;
               c+=(e==1)?1:0;
            }
            
            if(s.charAt(i)=='i'){
               ii++;
               c+=(ii==1)?1:0;
            }
            
            if(s.charAt(i)=='o'){
               o++;
               c+=(o==1)?1:0;
            }
            
            if(s.charAt(i)=='u'){
               u++;
               c+=(u==1)?1:0;
            }
        }
        
        for(int i=1;i<=c;i++)
        res*=i;
        
        if(a!=0)
        res*=a;
        if(e!=0)
        res*=e;
        if(o!=0)
        res*=o;
        if(ii!=0)
        res*=ii;
        if(u!=0)
        res*=u;
        
        if(c==0)
        res=0;
        
        return res;
        
        
    }
}
