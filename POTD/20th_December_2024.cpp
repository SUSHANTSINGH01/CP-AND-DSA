class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        int i;
        int k=0;
        int l=0;
        int r=mat.size();
        int c=mat[0].size();
        vector<int>res;
        while(k<r && l<c) 
        {
           
           for(i=l;i<c;i++){ 
            res.push_back(mat[k][i]);
           }
           
           k++;

           for(i=k;i<r;i++){
            res.push_back(mat[i][c-1]);
           }
           
           c--;

           if(k<r) 
           {
               for(i=c-1;i>=l;i--){
                res.push_back(mat[r-1][i]);
               }
               r--;
           }

           if(l<c) 
           {
               for(i=r-1;i>=k;i--){ 
                res.push_back(mat[i][l]);
               }
               l++;
           }
       }
       return res;
    }
};
