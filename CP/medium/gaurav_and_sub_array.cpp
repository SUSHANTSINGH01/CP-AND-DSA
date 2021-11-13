#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define fast ios_base::sync_with_stdio(false)
#define fast1 cin.tie(0)
#define fast2 cout.tie(0)
#define ulli long long int
#define setbit1(x) __builtin_popcountll(x) 
long long int ans=0;

int v[1000007];
int cnt[1000007];
int n;
bool func(int mid, int k)
{
    for(int i=0;i<=(n-mid);i++)
    {
        if((cnt[i+mid]-cnt[i])>=k)
        return true;
    }
    return false;
}

int main()
{
    fast;
    fast1;
    fast2;
    int q;
    cin>>n>>q;
    
    cnt[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        cnt[i]=setbit1(v[i]);
    }
    for(int i=1;i<=n;i++)
    cnt[i]+=cnt[i-1];

    while(q--)
    {
        int x;
        cin>>x;
        int ans=-1;
        int l=1;
        int r=n;

        while(l<=r)
        {
            int mid=(l+r)/2;
            if(func(mid, x))
            {
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        cout<<ans<<"\n";
   }
return 0;
}
