int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        if(d==1) 
        return 0;
        long long int res=1;
        long long int y=x%d;
        while(n>0)
        {
            if(n&1)
            res=((res)*y)%d;
            y=(y*y)%d;
            if(y<0) 
            y+=d;
            n=n>>1;
        }
        if(res<0)
        {
            res=(d-abs(res)%d);
            return res;
        }
        return res%d;
}
