// https://www.hackerearth.com/practice/algorithms/string-algorithm/z-algorithm/practice-problems/algorithm/tour/

#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define fast ios_base::sync_with_stdio(false)
#define fast1 cin.tie(0)
#define fast2 cout.tie(0)
#define ulli long long int
#define setbit1(x) __builtin_popcountll(x) 
int find(vector<string>v,int n,string s)
{
    for(int i=0;i<n;i++)
    if(v[i]==s)
    return i;
    return -1;
}
int main()
{
   fast;
    fast1;
    fast2;
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    
    int m;
    cin>>m;
    vector<string>v1(m);
    for(int i=0;i<m;i++)
    cin>>v1[i];

    ulli ans=0;
    int a=0;
    int b=0;
    for(int i=0;i<m;i++)
    {
        // delhi - bangolre
        // bangolre - delhi
        // delhi - hydrabad
        // hydrabad - bangolre
        
        b=find(v,n,v1[i]);
        cout<<a<<" "<<b<<" ";
        ans+=arr[a][b];
        a=b;
        cout<<ans<<" ";
        
    }
    cout<<ans<<"\n";
return 0;
}
