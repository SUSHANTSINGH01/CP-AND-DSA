int Solution::solve(string A) 
{
    int n=A.size();
    int arr[n];
    int j=0;

    for(int i=0;i<n;i++)
    {
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='u' || A[i]=='o')
        arr[j++]=i;
    }
    int sum1=0;
    int sum2=0; 
    int total=0;
    for(int i=0;i<j;i++)
    {
        sum1=(arr[i]-i);
        sum2=A.size()-arr[i]-(j-i);
        total+=(sum2+sum1);
    }
    int md=1000000007;
    return (total)%md;
}
