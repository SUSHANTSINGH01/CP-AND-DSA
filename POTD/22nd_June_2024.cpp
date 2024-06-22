//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    using ulli = long long int;
    long long ExtractNumber(string sentence) {

        // code here
        
        ulli res=-1;
        
        int i=0;
        int n=sentence.size();
        
        while(i<n){
            
            string temp="";
            int f=0;
            while(sentence[i]>='0' && sentence[i]<='9'){
                
                if(sentence[i]=='9')
                f=1;
                temp+=sentence[i];
                i++;
            }
            
            if(temp.size()!=0 && f==0){
                res=max(res,stoll(temp));
            }
            
            i++;
        }

        return res;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends
