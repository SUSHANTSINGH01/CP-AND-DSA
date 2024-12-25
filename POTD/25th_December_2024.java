class Solution {
    public void setMatrixZeroes(int[][] mat) {
        int[] row=new int[500];
        int[] col=new int[500];
        int n=mat.length;
        int m=mat[0].length;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==1 || col[j]==1)
                mat[i][j]=0;
            }
        }
        
    }
}
