vector<vector<int> > Solution::diagonal(vector<vector<int> > &A)
{
     int n=A.size();
     vector<vector<int>>vec;

     for(int i=0;i<n;i++)
     {
         int k=i+1;
         int k1=i+1;
         vector<int>temp;
         for(int j=0;j<k;j++)
         {
             k1--;
             temp.push_back(A[j][k1]);
         }
         vec.push_back(temp);
         
     }
     for(int i=1;i<n;i++)
     {
         int k=i;
         int k1=n;
         vector<int>temp;
         for(int j=k;j<n;j++)
         {
             k1--;
             temp.push_back(A[j][n-j+i-1]);
         }
         vec.push_back(temp);
     }
     return vec;

}
