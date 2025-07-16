class Solution {
    // 36 : 1,2,3,4,6,9,12,18,36 
    // 100 : 1,2,4,5,10,20,25,50,100
    
    
    private static boolean isPos(int m, int n){
        
        int c=2;
        
        for(int i=2;i<m;i++){
            if(n%i==0)
            c++;
            if(c>5)
            break;
        }

        return c==5;
        
    }
    public static int countNumbers(int n) {
        // code here
        
        int res = 0;
        
        for(int i=1;i*i<=n;i++){
            if(isPos(i,i*i))
            res += 1;
        }
        
        return res;
        
    }
}
