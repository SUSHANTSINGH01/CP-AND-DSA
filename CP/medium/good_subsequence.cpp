// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/good-sequences-46c31a23/

#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define fast ios_base::sync_with_stdio(false)
#define fast1 cin.tie(0)
#define fast2 cout.tie(0)
#define ulli long long int
#define setbit1(x) __builtin_popcountll(x) 

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
       
       ulli ans=1;
       
       for(int i=0;i<26;i++)
       if(arr[i]>0)
       ans=((ans%md)*(arr[i]%md))%md;
       cout<<ans<<"\n";

    }
 
return 0;
}
