bool is_possible(int A, int B, vector<int> &C,long long int mid)
{
    int n=C.size();
    long long int temp=mid;
    int i=0;
    int count=1;
    while(i<n)
    {
        if(count>A)
        return false;
        if(C[i]>temp)
        {
            count++;
            temp=mid;
        }
        else
        {
            temp=temp-C[i];
            i++;
        }
    }
    return true;
}

int Solution::paint(int A, int B, vector<int> &C) {
    int n=C.size();
    long long int sum=0;
    long long int low=0;
    
    for(int i=0;i<n;i++)
    sum=sum%10000003+C[i]%10000003;
    
    long long int high=sum*B;
    long long int res=high%10000003;
    
    while(low<=high)
    {
      
        
        long long int mid=low+(high-low)/2;
        if(is_possible(A,B,C,mid/B))
        {
            res=mid%10000003;
            high=mid-1;
        }
        else 
        low=mid+1;
        
        
    }
    return res%10000003;
}
