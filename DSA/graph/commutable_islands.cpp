int find(int par[], int u) 
{
    if(par[u]==-1)
    return u;
    return par[u]=find(par, par[u]);
}
void Union(int par[], int x, int y) 
{
    int xx=find(par,x);
    int yy=find(par,y);
    par[xx]=yy;
}
bool comp(vector<int>a,vector<int>b) 
{
    return a[2]<b[2];
}
int Solution::solve(int A, vector<vector<int> > &B) 
{
    int par[A+1];
    sort(B.begin(),B.end(),comp);
    for(int i=0;i<=A;i++)
    par[i]=-1;
    
    int res=0;
    for(int i=0;i<B.size();i++) 
    {
        int x=find(par, B[i][0]-1);
        int y=find(par, B[i][1]-1);
        
        if(x!=y) 
        {
            Union(par, x, y);
            res+=B[i][2];
        }
    }
return res;
}
