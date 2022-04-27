
int Solution::solve(string A) 
{
    int n = A.size();
    int i=0;
    int j=n-1;
    int temp;
    while(i<=j)
    {


       if( A[i]==A[j] )
       {
            if(j==n-1)
            temp=i;
           
            i++;
            j--;

       }
       else
       {
           if(j!=n-1)
           j=n-1;
           else
           i++;
        }
    }
    return temp;
}
