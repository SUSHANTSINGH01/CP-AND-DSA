class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
          int n=mat.size();
          int m=mat[0].size();
        
        
        if((m*n)!=(r*c))
        return mat;
        
        vector<vector<int>>newmat(r, vector<int> (c));
        
        int k=0;
        int l=0;
       
        for(int i=0; i<r; i++) 
        {
            for (int j=0; j<c; j++) 
            {
               
                if(!(l<m)) 
                {
                    k++;
                    l=0;
                }
                newmat[i][j]=mat[k][l++];
            }
        }
        return newmat;
    }
};
