int Solution::solve(vector<int> &A, vector<int> &B, int C) 
{
    int n1=A.size();
    int n2=B.size();
    int count=0;
    int count1=0;

    for(int i=0;i<n1;i++)
    if(A[i]>C)
    count++;

    for(int i=0;i<n2;i++)
    if(B[i]<C)
    count1++;

    return max(count,count1);
}
