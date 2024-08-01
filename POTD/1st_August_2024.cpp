class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        
        int i;
        int k=0;
        int l=0;
        vector<int>res;
        int r=matrix.size();
        int c=matrix[0].size();
        
        while(k<r && l<c) 
        {
           
           for(i=l;i<c;i++) 
           res.push_back(matrix[k][i]);
           
           k++;

           for(i=k;i<r;i++) 
           res.push_back(matrix[i][c-1]);
           
           c--;

           if(k<r) 
           {
               for(i=c-1;i>=l;i--) 
               res.push_back(matrix[r-1][i]);
               r--;
           }

           if(l<c) 
           {
               for (i=r-1;i>=k;i--) 
               res.push_back(matrix[i][l]);
               l++;
           }
       }
       return res;
    }
};
