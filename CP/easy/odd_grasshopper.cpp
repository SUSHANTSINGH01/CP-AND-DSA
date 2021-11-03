// https://codeforces.com/contest/1607/problem/B

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
        ulli n,m;
        cin>>n>>m;
      
        if (m%4==0)
        cout<<n;
      
        else
        {
            ulli temp=m%4;
            if(temp==1)
            {
              if(n%2)
              cout<<n+m;
              else
              cout<<n-m;
            }
            else if(temp==2)
            {
              if(n%2)
              cout<<n-1;
              else 
              cout<<n+1;
            }
            else if(temp==3)
            {
              if(n%2)
              cout<<n-m-1;
              else 
              cout<<n+m+1;
            }
          }
          cout<<'\n';
       }
    return 0;
}
