// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/compare-strings-1-1cb66e03/

#include<bits/stdc++.h>
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
    //cin>>t;
    t=1;
    while(t--)
    {
        int n,q,i;
        cin>>n>>q;
        string a,b;
        cin>>a;
        cin>>b;
        vector<int>v;
        int ca=0;
        int cb=0;
        for(i=0;i<n;i++)
        {
           if(b[i]=='1')
           cb++;
           if(a[i]=='1')
           ca++;
        }
        while(q--)
        {
            int k;
            cin>>k;
            if(b[k-1]=='0')
            {
                b[k-1]='1';
                cb++;
            }
            if(cb>=ca)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
