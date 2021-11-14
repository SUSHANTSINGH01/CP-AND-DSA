// https://www.hackerearth.com/practice/algorithms/string-algorithm/z-algorithm/practice-problems/algorithm/divide-array-2/

#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define fast ios_base::sync_with_stdio(false)
#define fast1 cin.tie(0)
#define fast2 cout.tie(0)
#define ulli long long int
#define setbit1(x) __builtin_popcountll(x) 
long long int ans=0;

int main()
{
    fast;
    fast1;
    fast2;
    ulli n;
    cin>>n;
    vector<ulli>v(n);
    
    for(int i=0;i<n;i++)
    cin>>v[i];
   
    int q;
    cin>>q;
    ulli prod=1;
    
    while(q--)
    {
        ulli x;
        cin>>x;
        prod=(prod*x)%md;
    }
    
    for(int i=0;i<n;i++)
    cout<<v[i]/prod<<" ";
    
return 0;
}
