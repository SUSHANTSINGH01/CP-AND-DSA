vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int> ans;
    int n=pow(2,A);
    ans.resize(n);
    if(n>1)
    {
        int maxx = pow(2,A-1);
        vector<int> temp = grayCode(A-1);
        for(int i=0;i<n;i++)
        {
            if(i<n/2)
            ans[i] = temp[i];
            else
            ans[i] = maxx + temp[n-i-1];
        }
    }
    else if(n==1)
    {
        ans[0]=0;
        ans[1]=1;
    }
    return ans;
}
