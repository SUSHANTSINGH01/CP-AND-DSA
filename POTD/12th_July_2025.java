class Solution {
    
    int maxxGold=Integer.MIN_VALUE;
    
    private int findMaxGold(int x, int y, int n, int[][] dp, int[][] mat){
        
        if(x<0 || x>=n || y>=n)
        return 0;
        
        int[] posX={-1,0,1};
        int[] posY= {1,1,1};
        
        if(dp[x][y]!=-1)
        return dp[x][y];
        
        int maxx=0;
        
        for(int i=0;i<3;i++){
            int newX = x + posX[i];
            int newY = y + posY[i];
            
            maxx = Math.max(maxx,mat[x][y]+findMaxGold(newX,newY,n,dp,mat));
        }
        
        return dp[x][y]=maxx;
        
    }
    public int maxGold(int[][] mat) {
        // code here
        
        int n=mat.length;
        
        int[][] dp = new int[n][n];
        for(int i=0;i<n;i++)
        Arrays.fill(dp[i],-1);
        
        for(int i=0;i<n;i++)
        maxxGold=Math.max(maxxGold,findMaxGold(i,0,n,dp,mat));
        
        return maxxGold;
        
    }
}
