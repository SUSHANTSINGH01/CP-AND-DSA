//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        
        int n=arr.size();
        int m=arr[0].size();
        
        if(n==1)
        return "0 R";
        
        for(int i=0;i<n;i++){
            int j=0;
            for(;j<m/2;j++){
                if(arr[i][j]==arr[i][m-j-1])
                continue;
                else
                break;
            }
            if(j>=(m/2))
            return to_string(i) + " R";
        }
        
        
        for(int j=0;j<m;j++){
            int i=0;
            for(;i<n/2;i++){
                if(arr[i][j]==arr[n-1-i][j])
                continue;
                else
                break;
            }
            if(i>=(n/2))
            return to_string(j) + " C";
        }
        
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends
