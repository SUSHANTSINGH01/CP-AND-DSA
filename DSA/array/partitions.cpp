int Solution::solve(int A, vector<int> &B) 
{
    int sum=0;
    int n=B.size();
    for(int i=0;i<n;i++)
    sum+=B[i];
    
    int res=0;
    if(sum%3==0)
    {
        int num1=sum/3;
        int num2=2*num1;
        sum=0;
        int c1=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=B[i];
            
            if(sum==num2)
            res+=c1;
            
            if(sum==num1)
            c1++;
        }
    }
    return res;
}
