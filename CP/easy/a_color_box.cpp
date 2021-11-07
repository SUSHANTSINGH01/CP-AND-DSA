// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/paint-box-3e9796fd/


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
       int n;
       cin>>n;
       
       vector<int>arr(n);
       vector<int>arr1(n);
       for(int i=0;i<n;i++)
       cin>>arr[i];
       for(int i=0;i<n;i++)
       cin>>arr1[i];

       long long int diff=0;
       
       for(int i=0;i<n;i++)
       if(arr1[i]>arr[i])
       diff+=(arr1[i]-arr[i]);

       long long int sum=0;

       for(int i=0;i<n;i++)
       if(arr[i]>arr1[i])
       sum+=((arr[i]-arr1[i])/2);

       if(sum>=diff)
       cout<<"Yes"<<"\n";
       else
       cout<<"No"<<"\n";
    }
    return 0;
}
