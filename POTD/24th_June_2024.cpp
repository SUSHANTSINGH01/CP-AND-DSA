//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    using ulli = long long int;
    long long sumMatrix(long long n, long long q) {
        // code here
        if(n+n<q)
        return 0;
        else{
            ulli n1 = n+1;
            return n-abs(q-n1);
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends
