int Solution::mice(vector<int> &A, vector<int> &B) 
{
    int res=0;
   int diff=0;
   sort(A.begin(),A.end());
   sort(B.begin(),B.end());
    
    for(int i=0;i<A.size();i++)
    {
        diff=abs(A[i]-(B[i]));
        res=max(diff,res);
    }

    return res;
}
