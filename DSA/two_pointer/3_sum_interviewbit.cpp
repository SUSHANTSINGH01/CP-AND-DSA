int Solution::threeSumClosest(vector<int> &A, int B) 
{
    int n=A.size();
    sort(A.begin(), A.end());

    if(n<3)
    return 0;

    int res;
    int minn=INT_MAX;
    
    for(int i=0;i<n-2;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            int temp=A[i]+A[l]+A[r];
            int diff=abs(temp-B);
            
            if(diff==0)
            return B;
            
            if(minn>diff)
            {                
                minn=diff;
                res=temp;
            }
            
            if(B>temp)
            l++;
            
            else
            r--;
            
        }
    }
    return res;
}



