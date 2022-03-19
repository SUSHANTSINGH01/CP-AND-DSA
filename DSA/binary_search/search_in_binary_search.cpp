int firsthalf(vector<int>&A,int l,int r,int B)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(A[mid]==B)
        return mid;
        
        else if(A[mid]<B)
        l=mid+1;
        
        else
        r=mid-1;
    }
    return -1;
}

int secondhalf(vector<int>&A,int l,int r,int B)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(A[mid]==B)
        return mid;
        
        else if(A[mid]<B)
        r=mid-1;
        
        else
        l=mid+1;
    }
    return -1;
}

int findmid(vector<int> &A)
{
    int n=A.size();
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        int left=0;
        int right=0;
        if(mid==0)
        left=INT_MIN;

        else
        left=A[mid-1];

        if(mid==n-1)
        right=INT_MIN;

        else
        right=A[mid+1];
       
        if(A[mid]>left && A[mid]>right)
        return mid;
        
        else if(A[mid]>left)
        l=mid+1;
        
        else
        r=mid-1;
    }
    return -1;
}

int Solution::solve(vector<int> &A, int B)
{
    int n=A.size();
    int pos=findmid(A);
    int x=firsthalf(A,0,pos,B);
    int y=secondhalf(A,pos+1,n-1,B);
    
    if(x==-1)
    return y;
    
    return x;
}
