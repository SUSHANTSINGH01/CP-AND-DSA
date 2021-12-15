int Solution::solve(vector<vector<int> > &A)
 {
        for(int i=A.size()-2; i>=0; i--)
        for(int j=0; j<A[0].size(); j++)
        {
            if(A[i][j]!=0) 
            A[i][j]+= max(A[i+1][j], A[i+1][j+1]);
        }
        return A[0][0];
 }

