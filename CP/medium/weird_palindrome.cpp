// https://www.codechef.com/NOV21B/problems/MAKEPAL

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
        int n;
        cin>>n;
        int c=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==1)
            c++;
        }
        cout<<c/2<<"\n";
      }
    return 0;
}
