// https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/sprinklers-7153515e/


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
       
       vector<int>arr(n);
       vector<int>arr1(n);
       for(int i=0;i<n;i++)
       cin>>arr[i];
       for(int i=0;i<n;i++)
       cin>>arr1[i];
       vector<int>neg(2*n+5,0);
       vector<int>pos(2*n+5,0);

       for(int i=0;i<n;i++)
       {
           if(arr[i]<0)
           {
               int l=arr[i]-arr1[i];
               int r=arr[i]+arr1[i];
               l=-l;
               //cout<<l<<" ";
               neg[l]++;
               if(r<0)
               {
                r=-r;
                //cout<<r;
                neg[r-1]--;
               }

            }
            else
            {
               int l=arr[i]-arr1[i];
               int r=arr[i]+arr1[i];
               pos[r]++;
               if(l>0)
               pos[l-1]--;
            }
       }
       for(int i=2*n+4;i>=0;i--)
       neg[i]=neg[i]+neg[i+1];
       for(int i=2*n+4;i>=0;i--)
       pos[i]=pos[i]+pos[i+1];

        //cout<<pos[5]<<"\n";
      // for(int i=0;i<=10;i++)
       //cout<<neg[i]<<" "<<pos[i]<<"\n";
      while(m--)
      {
          int x;
          cin>>x;
          if(x<0)
          cout<<neg[-x]<<"\n";
          else
          cout<<pos[x]<<"\n";
      }



    }
    return 0;
}
