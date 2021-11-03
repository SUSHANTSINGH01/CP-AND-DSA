// https://codeforces.com/contest/1607/problem/C

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
        ulli n;
        cin>>n;
        ulli arr[n];
        ulli ans=0;
        ulli c=0;
        ulli c1=0;
        
        for(int i=0;i<n;i++) 
        {
            cin>>arr[i];
            if(arr[i]<0)
            c=1;
        }
        
        sort(arr, arr + n);

        if(n==1) 
        {
            cout<<arr[0]<<"\n";
            continue;
        }

        if(c==1) 
        {
            for(int i=0;i<n-1;i++)
            {
                ans+=arr[i];
                arr[i+1]-=ans;
            } 
        } 
        else 
        {
            for(int i=0;i<n-1;i++) 
            {
                ans+=arr[i];
                arr[i+1]-=ans;
            } 
        }
        
        sort(arr, arr + n);
        cout<<arr[n-1]<<"\n";
    }
    return 0;
}
