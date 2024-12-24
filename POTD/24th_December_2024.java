class Solution {
    // Function to search a given number in row-column sorted matrix.
    boolean isPres(int[] mat, int x){
        int l=0;
        int r=mat.length-1;
        while(l<=r){
            int m=(l+r)/2;
            if(mat[m]==x)
            return true;
            if(mat[m]<x)
            l=m+1;
            else
            r=m-1;
        }
        return false;
    }
    public boolean searchMatrix(int[][] mat, int x) {
        // code here
        int r=mat.length;
        int c=mat[0].length;
        
        for(int i=0;i<r;i++){
            if(mat[i][c-1]>=x)
            if(isPres(mat[i],x)==true)
            return true;
        }
        
        return false;
        
    }
}
