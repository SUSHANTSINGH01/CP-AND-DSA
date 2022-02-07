vector<int> Solution::solve(vector<int> &A)
{
    int c=0;
    vector<int>res;
    int n=A.size();

    for(int i=0;i<n;i++)
    {
        if(A[i]!=0)
        res.push_back(A[i]);
        else
        c++;
    }

    for(int i=0;i<c;i++)
    res.push_back(0);

    return res;
}
