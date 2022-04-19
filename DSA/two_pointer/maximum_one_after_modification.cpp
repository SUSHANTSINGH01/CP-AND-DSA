int Solution::solve(vector<int> &A, int B)  
{
        int n=A.size();
        int zeros=0;
        int res=0;
        int l=0;
        int r=0;
        
        while(r<n) 
        {            
            if(zeros>B) 
            zeros-=(A[l++]==0);
               
            else 
            {
                if(A[r]==0)
                zeros+=1;
                if(zeros<=B)
                res=max(res,r-l+1);
                r++;
            }
        }
        return res;
}
