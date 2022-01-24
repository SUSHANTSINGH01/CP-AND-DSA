void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        
        for(int i=0;i<A.size();i++)
        for(int j=0;j<A[i].size();j++)
        {
            if(A[i][j]==0)
            {
                mp1[i]++;
                mp2[j]++;
            }
        }
        
        for(int i=0;i<A.size();i++)
        for(int j=0;j<A[i].size();j++)
        {
            if(mp1[i]>=1||mp2[j]>=1)
            A[i][j]=0;
        }
    }
