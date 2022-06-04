int Solution::jump(vector<int> &A) 
{
    int n=A.size();
    int pres=A[0];
    int res=1;
    int maxx=0;
    if(n==1)
    return 0;
    int i=0;
    for(i=1;i<n-1;i++)
    {
         maxx=max(maxx,A[i]+i);
         pres--;
         if(pres==0)
         {
             pres=maxx-i;
             res++;
         }
         if(pres<=0)
         return -1;
    }
    return res;
}
