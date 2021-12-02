// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
       //Your code here
       long long int md=1e9+7;
       long long int mat[1001][1001];
       int n=str.size();
       for(int i=0;i<n;i++) 
       for(int j=0;j<n;j++)
        {
           if(i==j) 
           mat[i][j]=1;
       }
       for(int i=0;i<n;i++) 
       for(int j=0;j<n;j++)
       {
           if(i==j-1 and str[i]==str[j]) 
           mat[i][j]=3;
           else if(i==j-1) 
           mat[i][j]=2;
       }
      
       for(int k=2;k<n;k++)
       {
           int i=0;
           int j=k;
           while(i<n and j<n)
           {
               if(str[i]==str[j]) 
               mat[i][j]=1+mat[i+1][j]+mat[i][j-1];
               else
               mat[i][j]=mat[i+1][j]+mat[i][j-1]-mat[i+1][j-1];
               mat[i][j]+=md;
               mat[i][j]%=md;
               i++;
               j++;
           }
       }
       return mat[0][n-1];
    }
     
};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}  // } Driver Code Ends
