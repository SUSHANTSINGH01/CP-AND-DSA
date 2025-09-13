class Solution {
    public static int minCost(int n, int m, int[] x, int[] y) {
        // code here
        int v = 1;
        int h = 1;
        
        Arrays.sort(x);
        Arrays.sort(y);
        
        int res = 0;
        n--;
        m--;
        
        int i = m-1;
        int j = n-1;
        
        while(i>=0 && j>=0){
            if(x[i]>=y[j]){
                res+=(x[i]*h);
                i--;
                v++;
            }else{
                res+=(y[j]*v);
                j--;
                h++;
            }
        }
        
        while(i>=0){
            res+=(x[i]*h);
            i--;
            v++;
        }
        
        while(j>=0){
            res+=(y[j]*v);
            j--;
            h++;
        }
        
        return res;
    }
}
