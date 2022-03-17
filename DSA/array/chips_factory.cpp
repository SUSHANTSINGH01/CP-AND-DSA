vector<int> Solution::solve(vector<int> &A) 
{
    int c=0;
    int n=A.size();
    vector<int>res;

    for(int i=0;i<n;i++)
    if(A[i]==0)
    c++;
    else
    res.push_back(A[i]);

    for(int i=0;i<c;i++)
    res.push_back(0);
    
    return res;
}
