// https://www.codechef.com/problems/CHEFHOME

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
          vector<int>a(n);
          vector<int>b(n);
          for(int i=0;i<n;i++)
          cin>>a[i]>>b[i];
          
          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
         
         ulli x = a[n/2]-a[(n-1)/2]+1;
          ulli y = b[n/2]-b[(n-1)/2]+1;
          cout<<x*y<<"\n";
      }
    return 0;
}
