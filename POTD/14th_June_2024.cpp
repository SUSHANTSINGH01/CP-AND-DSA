// C Code

#include <stdio.h>
#include <math.h>

char* solve(int n) {
    
    int sum = pow((n / 100), 3) + pow(((n % 100) / 10), 3) + pow(n % 10, 3);
    
    if (sum == n) {
        return "Yes";
    } else {
        return "No";
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--){
        int n;
        scanf("%d",&n);
        printf("Res is : %s", solve(n));
    }
    
    return 0;
}


// CPP Code


//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
    
      if((pow((n/100),3)+pow(((n%100)/10),3)+pow(n%10,3))==n)
      return "Yes";
      else
      return "No";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends

// Java Code

//{ Driver Code Starts
//Initial Template for Java
import java.util.*;
import java.io.*;
class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            Solution ob = new Solution();

            System.out.println(ob.armstrongNumber(n));
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution {
    static String armstrongNumber(int n){
        // code here
      int sum = (int) (Math.pow((n / 100), 3) + Math.pow(((n % 100) / 10), 3) + Math.pow((n % 10), 3));
      if(sum==n)
      return "true";
      else
      return "false";
    }
}
