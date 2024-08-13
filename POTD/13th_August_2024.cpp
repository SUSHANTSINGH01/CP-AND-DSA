class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        if(n<=1)
        return n;
        long long int start=1;
        long long int end=n;
        long long int mid;
        long long int res;
        
        while(start<=end)
        {
            mid=(start+end)/2;
            if(mid*mid==n)
            return mid;
            else if((mid*mid)>n)
            end=mid-1;
            else if((mid*mid)<n)
            {
                start=mid+1;
                res=mid;
            }
        }
        return res;
    }
};
