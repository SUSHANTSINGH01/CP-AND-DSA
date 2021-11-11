//  https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/k-th-digit-fa018b0f/

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
       ulli a,b,q;
       cin>>a>>b>>q;
       ulli c=0;
       ulli x,y;
       ulli temp=0;
      
       while(temp<q)
       {
            x=((pow(10,c)-a)/b);      
            ulli num=(pow(10,c)-a);
            if( num%b!=0 and num>0)
            x++;
            
            if(num<=0)
            x=0;
            num=pow(10,(c+1))-a;
            y=floor((pow(10,(c+1))-a)/b);

            if(num%b==0)
            y--;
            c++;
            if(y>=x and  y>=0)
            temp+= ((y-x+1)*c);

        }
        if(temp==q)
        cout<<(a+(y*b))%10<<"\n";

        else
        {
            ulli res=temp-q;
            res=y-(res/c);
            ulli count=(temp+1)-(c*(y-res));
            ulli num=a+(res*b);
            ulli ans=num%10;
            num=num/10;
            count--;
            while(count>q)
            {
                ans=num%10;
                num/=10;
                count--;
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
