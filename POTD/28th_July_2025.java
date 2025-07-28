class Solution {
    public static int balanceSums(int[][] mat) {
        // code here
        int res = 0;
        int n = mat.length;
        int maxx = 0;
        int totalSum = 0;
        
        for(int i=0;i<n;i++){
            
            int rowSum = 0;
            int colSum = 0;

            for(int j=0;j<n;j++){
                
               rowSum += mat[i][j];
               colSum += mat[j][i];
               totalSum += mat[i][j];
               
            }
            
            maxx = Math.max(maxx, Math.max(rowSum,colSum));
        }
        
        res = (maxx * n) - totalSum;
        
        return res;
    }
}
