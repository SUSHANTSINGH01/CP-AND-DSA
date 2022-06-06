long long int find(long long int x,vector<int>&par)
{
    if(par[x]==x)
    return x;
    return par[x]=find(par[x],par);
}
void unioon(long long int x,long long int y,vector<int>&par,vector<int>&rannk)
{
    long long int lx=find(x,par);
    long long int ly=find(y,par);
    if(rannk[lx]<rannk[ly])
    par[lx]=ly;
    else if(rannk[lx]>rannk[ly])
    par[ly]=lx;
    else
    {
        par[lx]=ly;
        rannk[ly]++;
    }
}

int Solution::solve(vector<int> &A, vector<int> &B, vector<vector<int> > &C) 
{
   int n=A.size();
   vector<int>par(n+1);
   vector<int>rank(n+1);

   for(int i=0;i<=n;i++)
   rank[i]=0,
   par[i]=i;

   for(int i=0;i<C.size();i++)
   {
       int x=A[C[i][0]-1];
       int y=A[C[i][1]-1];

       unioon(x,y,par,rank);
   }

   for(int i=0;i<n;i++)
   {
       int a=find(A[i],par);
       int b=find(B[i],par);
       if(a!=b)
       return 0;
   }
   return 1;

}
