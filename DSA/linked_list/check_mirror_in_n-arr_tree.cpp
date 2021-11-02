#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        unordered_map<int,vector<int>>mp1;
        unordered_map<int,vector<int>>mp2;
        for(int i=0;i<2*e;i+=2)
        mp1[A[i]].push_back(A[i+1]);
        for(int i=0;i<2*e;i+=2) 
        mp2[B[i]].push_back(B[i+1]);
        for(auto it:mp1)
        {
            vector<int>v=it.second;
            reverse(v.begin(),v.end());
            mp1[it.first]=v;
        }
        return mp1==mp2;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}
