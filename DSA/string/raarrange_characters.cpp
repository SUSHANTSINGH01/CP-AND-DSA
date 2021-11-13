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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        int arr[26]={0};
        
        for(int i=0;i<s.size();i++)
        arr[s[i]-'a']++;
        
        int n=s.size();
        int limit=(n+1)/2;
        int f=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]>limit)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<0<<"\n";
        else
        cout<<1<<"\n";
    }
    return 0;
}
