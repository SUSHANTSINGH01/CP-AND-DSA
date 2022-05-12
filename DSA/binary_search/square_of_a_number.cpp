int Solution::sqrt(int A) 
{
        int l=0;
        int r=A/2+1;
        long mid=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(mid*mid>A)
            r=mid-1;
            else if(mid*mid<A)
            l=mid+1;
            else
            return mid;
            
            if(mid*mid<A && ((mid+1)*(mid+1))>A)
            return mid;                
        }
        return 0;
}
