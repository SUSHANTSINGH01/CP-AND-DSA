class Solution {
public:
   long int solve( long int n,long int k)
{
    long int ans = 1;
 
      int t=k;
   
        if (k > n - k)
        k = n - k;
 
   
    for (int i = 0; i < k; ++i)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }
 
    return ans/(t+1);
}
    int numTrees(int n) 
    {
        return solve(2*n,n);
    }
};
