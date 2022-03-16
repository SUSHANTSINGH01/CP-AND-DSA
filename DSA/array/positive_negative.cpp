vector<int> Solution::solve(vector<int> &A) 
{
    int pos=0;
    int neg=0;
    int n=A.size();

    for(int i=0;i<n;i++)
    if(A[i]>0)
    pos++;
    else if(A[i]<0)
    neg++;

    return {pos,neg};
}
