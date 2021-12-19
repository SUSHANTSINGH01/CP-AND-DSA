long long int find(long long int x)
{
    if(par[x]==x)
    return x;
    return par[x]=find(par[x]);
}
void unioon(long long int x,long long int y)
{
    long long int lx=find(x);
    long long int ly=find(y);
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
long long int journeyToMoon(int n, vector<vector<int>> astronaut) 
{
    
    for(long long int i=0;i<n;i++)
    {
        par[i]=i;
        rannk[i]=i;
    }
    int m=astronaut.size();
    for(long long int i=0;i<m;i++)
    unioon(astronaut[i][0],astronaut[i][1]);
    long long int nn=n;
    long long int ans=((nn*(nn-1))/2);
  
    
    unordered_map<long long int,long long int>mp;
    for(long long int i=0;i<n;i++)
    {
        long long int pres=find(i);
        mp[pres]++;
    }
   
    for(auto it:mp)
    {
        long long int val=it.second;
        ans=ans-(long long int)((val*(val-1))/2);
    }
    
    return ans;
}
