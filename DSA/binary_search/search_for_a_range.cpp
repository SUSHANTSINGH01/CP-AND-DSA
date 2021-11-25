vector<int> Solution::searchRange(const vector<int> &A, int B) 
{
    int n=A.size();
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    vector<int>ans(2);
    ans[0]=-1;
    ans[1]=-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(A[mid]==B)
        {
             ans[0]=mid;
             high=mid-1;
        }
        else if(A[mid]<B) 
        low=mid+1;
        else 
        high=mid-1;
    }
    low=ans[0];
    high=n-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(A[mid]==B)
        {
             ans[1]=mid;
             low=mid+1;
        }
        else if(A[mid]<B) 
        low=mid+1;
        else 
        high=mid-1;
    }
    return ans;
}
