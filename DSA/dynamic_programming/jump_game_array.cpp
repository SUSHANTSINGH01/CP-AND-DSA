int Solution::canJump(vector<int> &A) 
{
    int maxx=0;
    int prev=0;
    int n=A.size();
    if(n==1)
    return 1;
    for(int i=0;i<n;i++)
    {
        maxx=max(maxx,i+A[i]);

        if(A[i]==0 && maxx==i)
        return 0;
    }
    return 1;
}
