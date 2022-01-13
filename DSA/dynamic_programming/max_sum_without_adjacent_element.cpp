int Solution::adjacent(vector<vector<int> > &A) 
{
    if(A.size()==0)
    return 0;
    if(A.size()==1)
    return max(A[0][0],A[1][0]);
    
    int  first=0;
    int  second=0;
    
    for(int i=0; i<A[0].size(); i++)
    {
        int num=max(A[0][i], A[1][i]);
        int temp=max(second, first);
    
        first=second+num;
        second=temp;
    }
    return max(first, second);
}
