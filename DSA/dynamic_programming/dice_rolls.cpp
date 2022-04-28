int Solution::solve(int A) 
{
    int n=6;
    int x=A;
    int mod=1000000007;
    int arr[7];
    
    for(int i=0;i<n;i++)
    arr[i]=i+1;
    
    int arr2[x+1];
    arr2[0]=1;
    for(int i=1;i<x+1;i++)
    arr2[i]=0;
    for(int i=0;i<x+1;i++)
    {
        for(int j=1;j<n+1;j++)
        if(i-arr[j-1]>=0)
        arr2[i]=(arr2[i]+arr2[i-arr[j-1]])%mod;
    }
    return arr2[x];
}
