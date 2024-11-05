void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    
        int n=mat.size();
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(i<j)
        swap(mat[i][j],mat[j][i]);
        else
        continue;
        
        for(int i=0;i<n;i++){
            int l=0;
            int r=n-1;
            while(l<=r){
                swap(mat[i][l],mat[i][r]);
                l++;
                r--;
            }
        }    
}
