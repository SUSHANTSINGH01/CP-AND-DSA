    static bool comparator(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }
int Solution::solve(vector<vector<int> > &A) 
{
        sort(A.begin(),A.end(),comparator);
        
        int c=0;
        int  prev=A[0][0];
        int prev_B=A[0][1];
        for(int i=1;i<A.size();i++)
        {
            if(A[i][0]<=prev_B)
            c++;
            else
            {
                prev=A[i][0];
                prev_B=A[i][1];
            }
               
        }
        return A.size()-c;
}
