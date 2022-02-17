int Solution::cntBits(vector<int> &A) 
{
    int md=1000000007;
    int n=A.size();
    long long int c=0;
    long long int sum=0;
    
    for(int i=0;i<31;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        if(A[j]&(1<<i)) 
        c++;
        
        sum+=(c*(n-c)*2);
    }
    
    sum%=md;
    return sum%md;
}
