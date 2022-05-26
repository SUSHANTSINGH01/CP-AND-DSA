vector<int> Solution::subUnsort(vector<int> &A) 
{
        int n=A.size();
        int st=-1;
        int e=-1;
        
        for(int i=0;i<n-1;i++)
        {
            if(A[i]>A[i+1])
            {
                st=i;
                break;
            }
        }
        if(st==-1)
        return {-1};
        
        for(int i=n-1;i>=0;i--)
        {
            if(A[i-1]>A[i])
            {
                e=i;
                break;
            }
        }
        
        int maxx=*max_element(A.begin()+st,A.begin()+e+1);
        int minn=*min_element(A.begin()+st,A.begin()+e+1);
       
        
        for(int i=0;i<st;i++)
        {
            if(A[i]>minn)
            {
                st=i;
                break;
            }
        }
        
        for(int i=n-1;i>=e+1;i--)
        {
            if(A[i]<maxx)
            {
                e=i;
                break;
            }
        }
        return {st,e};
        
}
