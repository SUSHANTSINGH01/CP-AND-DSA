int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) 
{
        int total=0;
        int cur=0;
        int res=0;
        int n=A.size();
        for(int i=0;i<n;i++)
        {
            total+=A[i]-B[i];
            cur+=A[i]-B[i];
            if(cur<0)
            {
                cur=0;
                res=i+1;
            }
        }
        if(total<0)
        return -1;

        return res;
}
