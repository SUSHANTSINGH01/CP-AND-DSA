// https://www.codechef.com/NOV21B/problems/MAXBRIDGE/

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
        int k=0;
        int l=1;
        vector<pair<int,int>>ans1(m);
        int i1=0;
        while(l<n)
        {
            int ans=l;
            l++;
            ans1[i1++]={ans,l};
            
        }
        
        k=l-1;
        if(m==n)
        {
           ans1[i1]={1,3};
            k++;
        }
        
        int i=1;
        int j=3;
        int c=0;
        while(k<m)
        {
            c=i;
            while(i<j)
           {
                if(abs(i-j)>=2)
                {
                    ans1[i1++]={i,j};
                    k++;
                    if(k>=m)
                    break;
                }
                i++;
           }
            i=1;
            j++;
        }
        
        
        
        
        sort(ans1.begin(),ans1.end());
        for(int i=0;i<m;i++)
        cout<<ans1[i].first<<" "<<ans1[i].second<<"\n";
        
            
    }
    return 0;
}
