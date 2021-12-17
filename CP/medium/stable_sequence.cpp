// https://www.codechef.com/problems/STBARR


#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int v[n];
        bool f=0;
        for (int i=0; i<n; i++)
        cin>>v[i];
        int pos=0;
        int maxx=0;
        for (int i=0; i<n-1; i++)
        {
          if (v[i]!=v[i+1])
          { 
            f=1;
            
          }
        }
        for(int i=0;i<n;i++)
        {
             if(v[i]>=maxx)
            {
                    maxx=v[i];
                    pos=i;
            }

        }
        if(f==1)
        {
           
           if(pos==n-1)
           cout<<"1"<<"\n";
           else 
           cout<<"2"<<"\n";
        }
        else
        cout<<"0"<<"\n";

    }
    return 0;
}
