int Solution::solve(vector<int> &A, int B, int C) 
{
    if(B%2==0)
    {
        int c=0;
        for(int i=0;i<A.size();i++)
        if(A[i]%2!=0)
        c++;

        return c*C;
    }
    else
    {
        int c=0;
        for(int i=0;i<A.size();i++)
        if(A[i]%2==0)
        c++;

        return c*C;
    }
    return 1;
}
