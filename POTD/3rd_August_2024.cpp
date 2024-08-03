class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        
        int n=mat.size();
        int known[n];
        int unknown[n];
        
        for(int i=0;i<n;i++) {
            unknown[i]=0;
            known[i]=0;
        }
        
        
        for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) 
        {
            if(mat[i][j]==1) 
            {
                known[i]++;
                unknown[j]++;
            }
        }
        
        for(int i=0;i<n;i++) 
        if(unknown[i] == n-1 && known[i] == 0)
        return i;
        
        return -1;
    }
};
