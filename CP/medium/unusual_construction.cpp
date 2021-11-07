// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/unusual-construction-3ec2e03f/

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
       long long int n,m;
       cin>>n>>m;
       map<pair<long long int,long long int>,long long int>mp;
       map<pair<long long int,long long int>,long long int>mp1;
       long long int maxx=0;
       for(int i=0;i<m;i++)
       {
          long long  int a,b,c;
           cin>>a>>b>>c;
           mp[{a,b}]++;
           long long int pre=mp1[{a,b}];
           c+=pre;
           mp1[{a,b}]=c;
           maxx=max(maxx,mp[{a,b}]);
        }
        //cout<<maxx<<" ";
        
        long long int sum=0;
       for(auto it:mp)
        {
           long long  int a=it.first.first;
            long long int b=it.first.second;
            //cout<<mp1[{a,b}]<<" ";
            if(it.second!=maxx)
            sum+=mp1[{a,b}];
        }
        cout<<sum<<"\n";

    }
    return 0;
}
