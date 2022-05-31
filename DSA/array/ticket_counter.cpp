int Solution::solve(vector<int> &A, vector<int> &B) 
{
    int n=B.size();

    long long int sum=0;
    sum+=B[0];
    int c=0;

    for(int i=1;i<n;i++)
    {
        if(A[i]<sum)
        c++;
        else
        sum+=B[i];
    }

    return c;
}
