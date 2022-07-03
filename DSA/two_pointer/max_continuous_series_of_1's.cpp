vector<int> Solution::maxone(vector<int> &A, int B) {
    vector<int>res;
    
        int n=A.size();
        int zeros=0;
        int maxx=0;
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
                maxx=max(maxx,r-l+1);
                r++;
            }
        }
        
        l=0;
        r=0;
        zeros=0;
        while(r<n) 
        {            
            if(zeros>B) 
            zeros-=(A[l++]==0);
               
            else 
            {
                if(A[r]==0)
                zeros+=1;
                if(zeros<=B)
                {
                    if(maxx==r-l+1)
                    {
                        for(int k=l;k<=r;k++)
                        res.push_back(k);
                        
                        break;
                    }
                    
                }
                r++;
            }
        }
        
        return res;
}
