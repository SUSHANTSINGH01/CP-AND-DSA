// https://www.codechef.com/problems/STROPERS

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
        string s;
		cin >> s;
		int n = s.size();
		set<tuple<int, int, int>>ans;
		for (int i = 0; i < n; i++)
		{
			int ones=0;
			int c=0;
			for(int j=i;j<n;j++)
			{
				if (s[j]=='1')
				ones++;
				if(ones & 1)
				c++;
				ans.insert({j-i+1,ones,c});
			}
		}
		cout<<ans.size()<<endl;
    }
    return 0;
}
