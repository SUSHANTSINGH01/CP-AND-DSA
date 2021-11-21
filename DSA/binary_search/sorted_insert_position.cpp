int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=A.size();
    int l=0;
    int r=n-1;
    int mid=l+(r-l)/2;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(A[mid]==B||(mid==0&&B<A[mid])||(mid>0&&B<A[mid]&&B>A[mid-1]))
        return mid;
        if(B>A[mid]) 
        l=mid+1;
        else 
        r=mid-1;
    }
    return n;
}
