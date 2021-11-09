// https://www.codechef.com/problems/TREEROOT

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
    cin>>t;
    while(t--)
    {
        ulli n;
        cin>>n;
        ulli sum1=0;
        ulli sum2=0;
        while(n--)
        {
            ulli l,r;
            cin>>l>>r;
            sum1+=l;
            sum2+=r;
        }
        cout<<(sum1-sum2)<<"\n";
      }
    return 0;
}
