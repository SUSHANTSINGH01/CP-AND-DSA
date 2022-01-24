class Solution {
public:
    bool solve(vector<int> piles, int limit, int h)
    {
        int c=0;
        for(auto p : piles)
        {
            c+=p/limit;
            if(p%limit) 
            c++;
        }
        return c>h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l=1;
        int r=*max_element(piles.begin(), piles.end());
        int n=piles.size();
        
        if(n==h) 
        return r;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(solve(piles, mid, h)) 
            l=mid+1;
            else 
            r=mid;
        }
        return l;
    }
};
