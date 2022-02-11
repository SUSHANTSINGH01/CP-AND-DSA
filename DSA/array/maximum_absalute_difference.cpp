int Solution::maxArr(vector<int> &A) 
{
    int sum=0;
    int maxx1=INT_MIN;
    int minn1=INT_MAX;
    int maxx2=INT_MIN;
    int minn2=INT_MAX;
    int n=A.size();
    for (auto i=0; i<n; i++)
    {
        maxx1=max(maxx1, A[i]+i);
        minn1=min(minn1, A[i]+i);
        maxx2=max(maxx2, A[i]-i);
        minn2=min(minn2, A[i]-i);
    }
    sum=max(maxx1-minn1, maxx2-minn2);
    return sum;
}
