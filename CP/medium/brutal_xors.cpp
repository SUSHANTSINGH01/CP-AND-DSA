// https://www.codechef.com/problems/BRTXORS


#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int md=1000000007;
    vector<long long int>v;
    long long int prev=1;
    for(int i=0;i<=45;i++)
    {
        v.push_back((prev*2));
        prev=(prev*2);
    }
    
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n==1)
        cout<<1<<"\n";
        else if(n==2)
        cout<<2<<"\n";
        else
        {
            for(int i=0;i<=45;i++)
            {
                if(n<v[i])
                {
                    cout<<(v[i])%md<<"\n";
                    break;
                }
                else if(n==v[i])
                {
                    cout<<(v[i+1]-1)%md<<"\n";
                    break;
                }

            }
        }
        
    }
    return 0;
}
