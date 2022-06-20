int Solution::solve(vector<vector<int> > &A) {
      
        int maxx=0;
        int n=A.size();
        vector<int>res(n+1,1);
    
        for(int i=1; i<n; i++)
        for(int j=0; j<i; j++)
        if(A[i][0]>A[j][1] && res[i]<res[j]+1)
        res[i]=res[j]+1;
        
        for(int i=0; i<n; i++)
        maxx=max(maxx,res[i]);
        
        return maxx;
}
