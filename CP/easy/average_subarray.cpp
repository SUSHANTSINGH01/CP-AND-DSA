// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/average-subarray-7b376ebf/

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
       int n,m;
       cin>>n>>m;
       vector<int>arr(n+1,0);
       for(int i=0;i<n;i++)
       cin>>arr[i];
       int sum=0;
       int c=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==1)
           c++;
           else
           c=0;
           if(c==m)
           {
               sum++;
               c=0;
           }
       }
       cout<<sum<<"\n";
    }
    return 0;
}
