int Solution::solve(int A) 
{
    long long int md=1000000007;
    long long int res=2;
    for(int i=1;i<=A;i++)
    {
        res=(res%md)*i;
       res%=md;
    }
    return res;
}
