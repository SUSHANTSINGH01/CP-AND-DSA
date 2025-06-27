class Solution {
    int[][][] dp;
    int solve(int i, int j, int n){
        if(n==1)
        return 1;
        
        int[] x = {0,0,1,0,-1};
        int[] y = {0,1,0,-1,0};
        
        if(dp[i][j][n]!=-1) 
        return dp[i][j][n];
        
        int res = 0;
        for(int l=0;l<5;l++){
            int newX = i+x[l];
            int newY = j+y[l];
            
            if((newX>=0 && newX<3 && newY>=0 && newY<3) || (newX==3 && newY==1)){
                res+=solve(newX, newY, n-1);
            }
        }
        
        return dp[i][j][n] = res;
        
    }
    public int getCount(int n) {
        // code here
        int[][] mat = new int[4][3];
        dp = new int[4][3][n+1];
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
               Arrays.fill(dp[i][j],-1);
            }
        }

        int k=0;
        mat[3][1] = k++;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
            mat[i][j]=(k++);
        }

        int result = 0;
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                result+=solve(i,j,n);
            }
        }
        
        result+=solve(3,1,n);
        return result;
        
    }
}
