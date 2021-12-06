class Solution {
public:
    int getMaximumGenerated(int n) 
    {
       vector<int>v(n+1);
       int maxx=INT_MIN;
        
        
        
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        
        v[0]=0;
        v[1]=1;
        
        for(int i=1;i<=n/2;i++)
        {
            if(2*i>=2 && 2*i<=n)
            {
                v[2*i]=v[i];
                maxx=max(maxx,v[2*i]);
            }
            if(2*i+1>=2 && 2*i+1<=n)
            {
                v[2*i+1]=v[i]+v[i+1];
                maxx=max(maxx,v[i+1]+v[i]);
            }
            
        }
      
        return maxx;
    }
};
