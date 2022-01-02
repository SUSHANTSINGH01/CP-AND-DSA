vector<int> Solution::primesum(int A) 
{
     vector<bool>prime(A+1);
    
    for(int i=0;i<=A;i++)
    prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=A;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=A;j+=i)
             prime[j]=0;
        }
    }
    
    for(int i=2;i<=A/2;i++)
    {
        if(prime[i]&&prime[A-i])
        return {i,A-i};
    }
}
