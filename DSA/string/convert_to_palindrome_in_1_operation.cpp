int Check(string A)
{
    int left = 0;
    int right = A.length() - 1;

    while(left < right)
    {
        if(A[left] == A[right])
        {
            left++;
            right--;
        }
        else 
        return 0; 
    }
    return 1;
}


int Solution::solve(string A) 
{
    int n=A.size();
    int left=0;
    int right= n - 1;

    while(left<right)
    {
        if(A[left] == A[right])
        {
            left++;
            right--;
        }
        
        else
        {
            string p=A.substr(0,left)+A.substr(left+1,n-left-1);
            string q=A.substr(0,right)+A.substr(right+1,n-right-1);
            
            return Check(p) || Check(q);
        }
    }
    return 1;
}
