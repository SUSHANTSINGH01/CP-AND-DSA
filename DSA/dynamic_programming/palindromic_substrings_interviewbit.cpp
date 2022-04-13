int Solution::solve(string A) 
{
        int res=0;
        int n=A.size();
        for(int i=0;i<n;i++)
        {
            res++;
            int k=i+1;
            for(int j=i-1; j>=0 && k<n; j)
            {
                if(A[j--]==A[k++])
                res++;
                else
                break;
            }
            k=i+1;
            for(int j=i; j>=0 && k<n; j)
            {
                if(A[j--]==A[k++])
                res++;
                else
                break;
            }
        }
        return res;
}
