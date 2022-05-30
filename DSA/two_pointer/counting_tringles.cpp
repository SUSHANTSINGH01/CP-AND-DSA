int Solution::nTriang(vector<int> &A)
{
        int n=A.size();
        long long int res=0;
        
        sort(A.begin(),A.end());
        int right=n-1;
        
        while(right>=2)
        {
            int left=0;
            int mid=right-1;
            while(left<mid)
            {
                
                 if(A[left]+A[mid]>A[right])
                 {
                       res=res+(mid-left);
                       mid--;
                 }
                 else
                 left++;
            }
            right--;
            res%=1000000007;
        }
        return res;
}
