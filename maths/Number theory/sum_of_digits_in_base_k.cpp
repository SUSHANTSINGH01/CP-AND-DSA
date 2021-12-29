class Solution {
public:
    int sumBase(int n, int k) 
    {
        int res=0;
        if(n/k==0) 
        return n;
        while(n/k)
        {
            res+=n%k;
            n=n/k;
            if(n/k==0)
            res+=n;
                
        }
        return res;
    }
};
