long long int poww(long long int base,long long int exp,long long int md)
{
    if(exp<0) 
    exp+=md-1;
    
    long long int res=1;
    while(exp)
    {
        if(exp&1)
        res=(res*base)%md;
        base=(base*base)%md;
        exp/=2;
    }
    return res;
}
int Solution::solve(int A, vector<int> &B) 
{
    long long int n=B.size();
    if(B[0]==1 && n==1)
    return 1;
    long long int res=1;
    long long int sum=0;
    long long int pro=1;
    sort(B.begin(),B.end());
    long long int fact[10000];
    fact[0] = 1;
    long long int md=1000000007;

    for(long long int i=1;i<10000;i++)
    fact[i]=(fact[i-1]*i)%md;
    
    vector<long long int>vs;
    vs.push_back(B[0]-1);
    
    for(long long int i=1;i<n;i++)
    vs.push_back(B[i]-B[i-1]-1);
    vs.push_back(A-B[n-1]);
    
    long long int m=vs.size();
    for(long long int i=0;i<m;i++)
    {
        if(vs[i]==0) 
        continue;
        if(i!=0 && i!=m-1) 
        res=(res*poww(2,vs[i]-1,md))%md;
        
        sum=(sum+vs[i])%md;
        pro=(pro*fact[vs[i]])%md;
    }
    
    res=(res*fact[sum])%md;
    res=(res*poww(pro,md-2,md))%md;
    
    return res;
}
