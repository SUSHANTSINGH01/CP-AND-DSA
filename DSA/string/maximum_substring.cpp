int Solution::solve(string A, int B) 
{
    int c=0;
    int maxx=0;
    int j=0;
    while(j<A.size())
    {
    
        for(int i=j;i<j+B && i<A.size();i++)
        if(A[i]=='a')
        c++;

        maxx=max(maxx,c);
        j+=B;
        c=0;
    }
  return maxx;
}
