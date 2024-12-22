class Solution {
    public static boolean matSearch(int mat[][], int x) {
        // your code here
        int n=mat.length;
        int m=mat[0].length;
        int r=0;
        int c=m-1;
        while(r<n && c>=0){
            if(mat[r][c]==x)
            return true; 
            else if(mat[r][c]>x)
            c--;  
            else
            r++;
        }
        return false; 
    }
}
