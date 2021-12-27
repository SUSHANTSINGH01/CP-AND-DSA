int Solution::diffPossible(vector<int> &A, int B) 
{
    int n=A.size();

    if(n<=1)
    return 0;
    
    int j;
    int diff;

    for(int i=0;i<n;i++)
    {
        j=n-1;
        while(j!=i)
        {
            diff=A[j]-A[i];
            if(B < diff)
            j--;
            else if(diff==B)
            return 1;
            else
            break;
        }
    }
    return 0;
}
