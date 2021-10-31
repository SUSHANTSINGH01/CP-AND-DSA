// codechef.com/problems/HLPNISHANT

#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define fast ios_base::sync_with_stdio(false)
#define fast1 cin.tie(0)
#define fast2 cout.tie(0)
#define ulli long long int 
int main()
{
    fast;
    fast1;
    fast2;
    int t;
    cin>>t;
    while(t--)
    {
        ulli n;
	    cin>>n;
	    ulli ans=0;
        ans=sqrt(4*(2*n-2)+1);
	    if(ans%2==1)
	    ans++;
	    cout<<ans<<endl;
    }
    return 0;
}
