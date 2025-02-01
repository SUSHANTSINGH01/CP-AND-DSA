class Solution {
    public static boolean isSame(int i, int j, int m, int n, char[][] mat, int s, String word, boolean[][] vis){
        if(s==word.length())
        return true;
        
        if(i<0 || i>=m || j<0 || j>=n)
        return false;
        
        vis[i][j]=true;
        
        int[] x={0,1,0,-1};
        int[] y={1,0,-1,0};
        
        for(int k=0;k<4;k++){
            int newX=x[k]+i;
            int newY=y[k]+j;
            
            if(newX>=0 && newX<m && newY>=0 && newY<n && vis[newX][newY]==false && mat[newX][newY]==word.charAt(s)){
                if(isSame(newX,newY,m,n,mat,s+1,word,vis))
                return true;
            }
        }
        
        vis[i][j]=false;
        return false;
    }
    static public boolean isWordExist(char[][] mat, String word) {
        // Code here
        int m=mat.length;
        int n=mat[0].length;
        boolean[][] vis = new boolean[m][n];
        
        
        for(int i=0;i<m;i++)
        Arrays.fill(vis[i], false);
        
        int s=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==word.charAt(0)){
                    if(isSame(i,j,m,n,mat,s,word,vis)){
                        return true;
                    }
                }
            }
        }
        return false;
         
    }
}
