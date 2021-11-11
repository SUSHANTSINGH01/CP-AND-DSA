// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bags-of-coins-7b1d612c/

#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define fast ios_base::sync_with_stdio(false)
#define fast1 cin.tie(0)
#define fast2 cout.tie(0)
#define ulli long long int 
//long long int ans=0;

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
       ulli n;
        cin>>n;
        vector<ulli>ans(n);
        
        for(int i=0;i<n;i++)
        cin>>ans[i];
        
        sort(ans.begin(),ans.end());
        vector<ulli>pre(n+1,0);
        bool f=0;
        for(int i=0;i<n;i++)
        pre[i]=ans[i];

       for(int i=0;i<n;i++)
       pre[i+1]+=pre[i];
       

        ulli l=0;
        ulli r=0;
        
        for(int i=1;i<=n;i++)
        {
            l=0;
            r=0;
           ulli x=lower_bound(ans.begin(),ans.end(),i)-ans.begin();
           ulli y=upper_bound(ans.begin(),ans.end(),i)-ans.begin();
           l=pre[x-1];
           r=pre[n-1]-pre[y-1];
           if(l==r)
           {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}






