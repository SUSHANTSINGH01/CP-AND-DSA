#include<bits/stdc++.h>
using namespace std;
const int maxn=100005;
vector<int>pre(maxn);
void solve(string s)
{
	int j=0;
	pre[0]=0;
	for(int i=1;i<s.size();i++)
	{
		while(j && s[i]!=s[j])
		j=pre[j-1];
		
		if(s[i]==s[j])
		j++;
		pre[i]=j;
        cout<<j<<" ";
	}
    for(int i=0;i<s.size();i++)
    cout<<pre[i]<<" ";
}

int calculate (string N) 
{     
        if(N[0]=='0')
        return 0;

        solve(N);
		int ans=0;
        int j=1;
		for(int i=1;j<=N.size()/2;i+=2)
		{
			if(pre[i]==j)
            ans++;
			else if(pre[i]>j && N[j]==N[j-1])
            ans++;
            j++;
            cout<<ans<<"ans"<<i<<" "<<j<<" ";
		}
		return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string N;
    getline(cin, N);

    int out_;
    out_ = calculate(N);
    cout << out_;
}
