int Solution::solve(vector<int> &A, int B) 
{
    int c=0;
    for(int i=0;i<A.size();i++)
    if(A[i]<=B)
    c++;
    return c;
}
