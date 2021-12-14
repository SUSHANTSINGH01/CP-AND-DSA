int Solution::climbStairs(int A) 
{
    vector<int>res(A+1,0);
    res[1]=1;
    
    res[2]=2;
    if(A==1)
    return 1;
    if(A==2)
    return 2;
   
    for(int i=3;i<=A;i++)
    {
        res[i]+=res[i-1]+res[i-2];
        
    }
    return res[A];
}
