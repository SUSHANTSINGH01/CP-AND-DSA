void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
       int r=A.size();
       int c=A[0].size();
       for(int i=0;i<r/2;i++) 
       {
           for(int j=i;j<c-i-1;j++) 
           {
             int temp=A[i][j];
             A[i][j]=A[r-1-j][i];
             A[r-1-j][i]=A[r-1-i][c-1-j];
             A[r-1-i][c-1-j]=A[j][c-1-i];
             A[j][c-1-i]=temp;
          }
       }   
}
