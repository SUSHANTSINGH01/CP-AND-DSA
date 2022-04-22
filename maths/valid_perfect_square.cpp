class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long long int temp=1;
        long int l=0;
        long int r=INT_MAX;
        while(l<=r)
        {
            long int mid=(l+r)/2;
            //cout<<mid<<endl;
            
            if(mid*mid==num)
            return 1;
            
            else if(mid*mid<num)
            l=mid+1;
            
            else
            r=mid-1;
            
        }
        
        if(l*l==num ||  r*r==num)
        return 1;
        
        return 0;
        
    }
};
