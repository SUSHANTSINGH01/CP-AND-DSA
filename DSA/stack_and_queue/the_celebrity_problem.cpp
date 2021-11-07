lass Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
    
        for(int i=0;i<n;i++)
        st.push(i);
        
        while(st.size()>1)
        {
            int r=st.top();
            st.pop();
            int c=st.top();
            st.pop();
            
            if(M[r][c]==1)
            {
                if(M[c][r]==0)
                st.push(c);
            }
            else
            {
                if(M[c][r]==1)
                st.push(r);
            }
        }
        if(st.size()==1)
        {
           for(int i=0;i<n;i++)
           {
                if((M[i][st.top()]==0 || M[st.top()][i]==1) && st.top()!=i)
               {
                    st.pop();
                    return -1;
                }
            }
            return st.top();
            
        }
    
        return -1;
    }
};
