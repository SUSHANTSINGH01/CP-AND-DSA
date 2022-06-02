double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n=A.size();
    int m=B.size();
    
    if(m>n) 
    return findMedianSortedArrays(B,A);
    
    int l=0;
    int h=2*m;
    
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        int mid1=m+n-mid;
        
        double left1=(mid1==0)?INT_MIN:A[(mid1-1)/2];	
        double left2=(mid==0)?INT_MIN:B[(mid-1)/2];
        double right1=(mid1==n*2)?INT_MAX:A[(mid1)/2];
        double right2=(mid==m*2)?INT_MAX:B[(mid)/2];
        
        if(left1>right2)
        l=mid+1;

        else if(left2>right1) 
        h=mid-1;

        else 
        return (max(left1,left2)+min(right1,right2))/2;	
    }
}
