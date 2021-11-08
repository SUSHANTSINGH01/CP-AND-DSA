// https://www.codechef.com/problems/CHFQUEUE

#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define fast ios_base::sync_with_stdio(false)
#define fast1 cin.tie(0)
#define fast2 cout.tie(0)
#define ulli long long int 
long long int ans=0;

int main()
{
    fast;
    fast1;
    fast2;
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        ulli n,k; 
        ulli ans=1;
        stack<ulli>st;
        cin>>n>>k;
        ulli arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        st.push(n-1);
        
        for(int i=n-2;i>=0;i--)
        {
            while (st.empty()==false && arr[i]<=arr[st.top()])
            st.pop();
            if(st.empty()==false)
            ans=(ans%md)*(st.top()%md-i%md+1)%md;
            st.push(i);
        }  
        cout<<ans<<"\n";
    }
    return 0;
}
