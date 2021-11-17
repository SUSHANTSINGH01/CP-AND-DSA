int solve(int a,int b)
{
    if (b == 0)
    return a;
    return solve(b,a%b);
}
int Solution::gcd(int A, int B) 
{
    return solve(A,B);
}

