int Solution::solve(int A) 
{
    if(A==0)
    return 0;
    long long int prod=1;
    while(A)
    {
        int rem=A%10;
        if(rem==0)
        return 0;
        prod*=(A%10);
        A/=10;
    }
    return prod;
}
