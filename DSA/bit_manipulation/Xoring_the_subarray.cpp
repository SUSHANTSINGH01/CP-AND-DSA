int Solution::solve(vector<int> &A) 
{
    int n=A.size();
    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
            if(n%2)
            ans=ans^A[i];
        }
        else if((i+1)%2 && (n-i)%2)
        ans=ans^A[i];
    }
    return ans;
}
