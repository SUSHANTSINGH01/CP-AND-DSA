long long int solve1(vector<int>&A, long long int B,long long int mid)
{
    long long int sum=0;
    
    for(int i=0;i<A.size();i++)
    if(A[i]>mid)
    sum+=(A[i]-mid);
    
    return sum;
}
int Solution::solve(vector<int> &A, int B) {
    
    long long int n=A.size();
    long long int l=1;
    long long int r=*max_element(A.begin(),A.end());
    //cout<<r<<endl;
    while(l<=r)
    {
        long long int mid=l+(r-l)/2;
        
        long long int temp=solve1(A,B,mid);
        //cout<<temp<<" "<<mid<<endl;
        if(B==temp)
        return mid;
        
        else if(B<temp)
        l=mid+1;
        
        else
        r=mid-1;
    }
    
    return r;
}
