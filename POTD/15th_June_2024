//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long getCount(int n) {
        // Your code goes here
        
        vector<long long>dp(10,1);
        
        for(int i=1;i<n;i++){
            
            vector<long long>temp_dp(10,0);
            
            temp_dp[0]=dp[0]+dp[8];
            temp_dp[1]=dp[1]+dp[2]+dp[4];
            temp_dp[2]=dp[2]+dp[1]+dp[3]+dp[5];
            temp_dp[3]=dp[3]+dp[2]+dp[6];
            temp_dp[4]=dp[4]+dp[5]+dp[7]+dp[1];
            temp_dp[5]=dp[5]+dp[4]+dp[6]+dp[8]+dp[2];
            temp_dp[6]=dp[6]+dp[3]+dp[5]+dp[9];
            temp_dp[7]=dp[7]+dp[4]+dp[8];
            temp_dp[8]=dp[8]+dp[5]+dp[9]+dp[0]+dp[7];
            temp_dp[9]=dp[9]+dp[8]+dp[6];
            
            for(int i=0;i<10;i++)
            dp[i]=temp_dp[i];
        }
        
        long long res=0;
        
        for(int i=0;i<10;i++)
        res+=dp[i];
        
        return res;
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends
