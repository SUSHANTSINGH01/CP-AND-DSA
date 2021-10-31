#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>vp(n);
        for(int i=0;i<n;i++)
        vp[i]={end[i],start[i]};
        
        sort(vp.begin(),vp.end());
        
        int c=0;
        int maxx=-1;
        for(int i=0;i<n;i++)
        {
          int a=vp[i].second;
          int b=vp[i].first;
           if(a > maxx)
           {
               c++;
               maxx=b;
           }
        }
         
         return c;   
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  
