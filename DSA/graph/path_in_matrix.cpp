int solve(vector<vector<int>>&A, vector<vector<bool>>&vec, int i1, int j1,int i2, int j2,int n,int m)
{
   //cout<<i1<<" "<<j1<<endl;
    if(i1==i2 && j1==j2)
    return 1;

    if(i1-1>=0 && i1-1==i2 && j1==j2)
    return 1;

    if(j1-1>=0 && i1==i2 && j1-1==j2)
    return 1;

    if(n-1>=i1+1 && i1+1==i2 && j1==j2)
    return 1;

    if(m-1>=j1+1 && i1==i2 && j1+1==j2)
    return 1;
    
    if(i1>n-1 || i1<0 || j1>m-1 || j1<0)
    return 0;

   if(vec[i1][j1]==true)
   return 0;

   vec[i1][j1]=true;
   int res1=0;
   int res2=0;
   int res3=0;
   int res4=0;
   if(i1-1>=0 && A[i1-1][j1]==3)
   res1=solve(A,vec,i1-1,j1,i2,j2,n,m);
   
   if(j1-1>=0 && A[i1][j1-1]==3)
   res2= solve(A,vec,i1,j1-1,i2,j2,n,m);
   
   if(i1+1<=n-1 && A[i1+1][j1]==3)
   res3 =solve(A,vec,i1+1,j1,i2,j2,n,m);
   
   if(j1+1<=m-1 && A[i1][j1+1]==3)
   res4= solve(A,vec,i1,j1+1,i2,j2,n,m);
   
   return res1|res2|res3|res4;
}
int Solution::checkPath(vector<vector<int>>&A) 
{
    int n=A.size();
    int m=A[0].size();
    vector<vector<bool>>vec(n+1,vector<bool>(m+1,0));
    int i1=0;
    int j1=0;
    int i2=0;
    int j2=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            vec[i][j]=false;
            if(A[i][j]==1)
            {
                i1=i;
                j1=j;
            }
            if(A[i][j]==2)
            {
                i2=i;
                j2=j;
            }
        }
    }

    return solve(A,vec,i1,j1,i2,j2,n,m);
}
