long Solution::countSalutes(string A)
{
    
    long long int r=0;
    long long int n=A.size();
    long long int sum=0;

    for(long long int i=0;i<n;i++)
    if(A[i]=='<')
    sum+=r;
    else
    r++;

    return sum;
}
