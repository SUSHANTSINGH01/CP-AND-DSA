// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/highest-average-25400da7/

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
   // cin>>t;
    t=1;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        vector<int>p(n,0);
        p[0]=v[0];
        ulli sum=v[0];
        for(int i=1;i<n;i++)
        {
            sum+=v[i];
            p[i]=(sum/(i+1));
        }
        int q;
        cin>>q;
        while(q--)
        {
            int x;
            cin>>x;
           // cout<<x;
            auto l=lower_bound(p.begin(),p.end(),x)-p.begin();
            cout<<l<<"\n";
        }
    }
    return 0;
}

