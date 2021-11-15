int Solution::solve(vector<int> &A, int B) 
{
      int ans=0;
     int n=A.size();
     for (int i=0; i<B;i++)
     ans+=A[i];
        

            int sum = ans;

            for (int i=0;i<B;i++) 
            {
                sum -= A[B-i-1];
                sum += A[n-i-1];

                ans= max(ans, sum);
            }

            return ans;
}

    
