class Solution {
    public ArrayList<ArrayList<Integer>> applyDiff2D(int[][] mat, int[][] opr) {
        // code here
        int n=mat.length;
        int m=mat[0].length;
    
        ArrayList<ArrayList<Integer>> res = new ArrayList<>();
        int[][] diff = new int[n+1][m+1];
    
        for(int[] it:opr){
            
            int val=it[0];
            int r1=it[1];
            int c1=it[2];
            int r2=it[3];
            int c2=it[4];
    
            diff[r1][c1]+=val;
           
            if((c2+1)<m) 
            diff[r1][c2 + 1]-=val;
            
            if((r2+1)<n) 
            diff[r2+1][c1]-=val;
            
            if((r2+1)<n && (c2+1)<m) 
            diff[r2+1][c2+1]+=val;
        }
    

        for(int i=0;i<n;i++)
        for(int j=1;j<m;j++) 
        diff[i][j]+=diff[i][j-1];


        for(int i=0;i<m;i++)
        for(int j=1;j<n;j++) 
        diff[j][i]+=diff[j-1][i];


        for(int i=0;i<n;i++){
            ArrayList<Integer> arr = new ArrayList<>();
            for(int j=0;j<m;j++) 
            arr.add(mat[i][j]+diff[i][j]);
            res.add(arr);
        }
            
    
        return res;
    }
}
