unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    long long int ans=0;
    int i=31;
    while(A)
    {
        
        if(A%2==1)
        ans+=pow(2,i);

        i--;
        A/=2;
    }
    return ans;
}
