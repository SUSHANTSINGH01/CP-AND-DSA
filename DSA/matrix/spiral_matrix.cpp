class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
          vector<int>ans;
          if(matrix.size()==0)
          return ans;
          
          int r=matrix.size();
          int c=matrix[0].size();
          
          int i;
          int k=0;
          int l=0;
       
          while (k<r && l<c) 
          {
           
               for(i=l;i<c;++i) 
               ans.push_back(matrix[k][i]);

               k++;


               for(i=k;i<r;++i) 
               ans.push_back(matrix[i][c-1]);

               c--;


               if (k<r) 
               {
                   for(i=c-1;i>=l;--i) 
                   ans.push_back(matrix[r-1][i]);

                   r--;
               }


               if (l<c) 
               {
                   for (i=r-1;i>=k;--i) 
                   ans.push_back(matrix[i][l]);

                   l++;
               }
       }
       return ans;   
    }
};
