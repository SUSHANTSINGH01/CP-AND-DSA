vector<vector<int> > Solution::solve(vector<int> &A, int B, int C) 
{
        int r1=0;
        int r2=B-1;
        int c1=0;
        int c2=C-1;
        int val=0;

        vector<vector<int>> res(B, vector<int> (C));
       
        while(r1 <= r2 && c1 <= c2)
        {
          
            for(int i=c1; i<=c2; i++)
            res[r1][i]=A[val++];
				
				
            for(int i = r1+1; i <= r2; ++i)
            res[i][c2]=A[val++];
				
          
            if(r1 < r2 && c1 < c2)
            {
              
                for(int i=c2-1; i>c1; i--)
                res[r2][i]=A[val++];
					
				for(int i=r2; i>r1; i--) 
                res[i][c1]=A[val++];
            }
            ++r1;
            --r2;
            ++c1;
            --c2;
        }
        return res;



}
