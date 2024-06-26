
// Optimized Solution


class Solution 
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



// Brute force Solution

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
        int c=0;
        int j=0;
        
        while(j<n){
            if(M[0][j]==1)
            break;
            
            j++;
        }
        
        if(j==n)
        j=0;
        
            int j1=0;
            int i=0;
            while(j1<n){
                if(j1!=j && M[j][j1]==1)
                return -1;
                
                j1++;
            }
            
            while(i<n){
                if(i!=j && M[i][j]!=1)
                return -1;
 
                i++;
            }
            
            return j;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends
