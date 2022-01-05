int power(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    x++;
    return x-1;
}

int Solution::solve(int A) 
{
    if(A<=1)
    return A;
    int x=power(A);
    long long int res= (x*pow(2,(x-1))) + (A-pow(2,x)+1) + solve(A-pow(2,x));
    return res%1000000007;
}
