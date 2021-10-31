// https://www.codechef.com/SNCK1B21/problems/LARGESTLADDU

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
        int n; 
        cin>>n;
        int m=pow(2,n);
        vector<int>arr(m);
        for(int i=0;i<m;i++)
        cin>>arr[i];
        int minn=*min_element(arr.begin(),arr.end());
        int maxx=*max_element(arr.begin(),arr.end());
        if(maxx-minn<=1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
