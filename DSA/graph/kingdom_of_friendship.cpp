int Solution::solve(vector<int> &A) 
{
    int res=0;
    for(int i=1;i<=A.size();i++)
    if(A[i-1]!=i && A[A[i-1]-1]==i)
    res+=1;

    return res/2;
}
