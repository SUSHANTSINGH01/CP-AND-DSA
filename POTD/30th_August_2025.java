class Solution {
    public int celebrity(int mat[][]) {
        // code here
        int n = mat.length;
        int[] knownTo = new int[n];

        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        knownTo[j]+=mat[i][j];
        
        for(int i=0;i<n;i++){
            if(knownTo[i]==n){
                int c=0;
                
                for(int j=0;j<n;j++)
                if(mat[i][j]==1)
                c++;
                
                if(c==1)
                return i;
            }
        }
        return -1; 
    }
}
