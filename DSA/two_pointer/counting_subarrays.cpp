int Solution::solve(vector<int> &A, int B) 
{
    int n=A.size();
    int res=0;
    int sum=0;
    
    int i=0;
    int j=0;
    
    while(j<n)
    {
        sum+=A[j];

        while(sum>=B)
        {
            sum-=A[i];
            i++;
        }
            
        res+=(j-i+1);
        j++;
    }

    return res;
}
