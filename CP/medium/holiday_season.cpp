// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/holiday-season-ab957deb/

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
    //cin>>t;
    t=1;
    while(t--)
    {
        

            int n;
            cin>>n;
            string s;
            cin>>s;

            vector<vector<int>>v(26);
           //  defining col size;
            for(int i=0;i<26;i++)
            v[i].resize(n,0);
            
            for(int i=0;i<n;i++)
            v[s[i]-'a'][i]=1;
            
            for(int i=0;i<26;i++)
            {
                for(int j=1;j<n;j+=1)
                v[i][j]+=v[i][j-1];
            }

            ulli ans=0;
            

            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(s[i]==s[j])
                    {
                        for(int k=0;k<26;k++)
                        ans+=(v[k][n-1]-v[k][j])*(v[k][j-1]-v[k][i]);
                    }
                }
            }
        cout<<ans;
        }
    return 0;
}


