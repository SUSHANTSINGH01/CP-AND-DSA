// https://www.codechef.com/NOV21B/problems/HILLSEQ

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
        map<int,int>mp;
        bool f=0;
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            if(mp[x]>=3)
            f=1;
            maxx=max(maxx,x);
        }
        vector<int>ans;
        if(f==1 || (n==2 && mp.size()==1) || mp[maxx]>=2)
        cout<<-1<<"\n";
        else
        {
            
            map<int,int>mp1;
            for(auto it:mp)
            {
                ans.push_back(it.first);
                mp[it.first]--;
                if(mp[it.first]==1)
                mp1[it.first]++;
            }
            vector<int>ans1;
            for(auto it:mp1)
            {
                ans1.push_back(it.first);
            }
            for(int i=ans1.size()-1;i>=0;i--)
            ans.push_back(ans1[i]);
            for(int i=ans.size()-1;i>=0;i--)
            cout<<ans[i]<<" ";
            cout<<"\n";
            
        }
      }
    return 0;
}
