vector<int> Solution::wave(vector<int> &A) 
{
    sort(A.begin(),A.end());
    int n=A.size();
    for(int i=1;i<n;i+=2)
    swap(A[i],A[i-1]);

    return A;
}
