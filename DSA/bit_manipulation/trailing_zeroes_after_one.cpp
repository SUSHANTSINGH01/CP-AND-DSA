int Solution::solve(int A) 
{
    int c=0;
    int c1=0;
    long long int m=A;
    while(m)
    {
        if(m%2==1)
        c++;
        else if(c==0)
        c1++;
        m/=2;
    }
    return c1;
}
