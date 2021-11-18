class Solution {
  public:
    long long int count(int S[], int m, int n) {

        // code here.
       long long int arr2[m+1][n+1];
         for(int i=0;i<m+1;i++)
         {
             for(int j=0;j<n+1;j++)
             {
                 if(i==0&&j==0||j==0)
                 arr2[i][j]=1;
                 else
                 arr2[i][j]=0;
             }
         }
         for(int i=1;i<m+1;i++)
         {
             for(int j=1;j<n+1;j++)
             {
                 if(S[i-1]<=j)
                 arr2[i][j]=(arr2[i][j-S[i-1]]+arr2[i-1][j]);
                 else
                 arr2[i][j]=arr2[i-1][j];
             }
         }
        return arr2[m][n];
 
    }
};
