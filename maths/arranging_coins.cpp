class Solution {
public:
    int arrangeCoins(int n) {
     
        int l=1;
        int r=n;
        long long int mid=0;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            long long int total=(mid*(mid+1))/2;
            if(total==n)
            return mid;
            else if(total>n)
            r=mid-1;
            else
            l=mid+1;
            
        }
        return r;
    }
};
