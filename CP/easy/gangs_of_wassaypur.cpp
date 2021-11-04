// https://www.codechef.com/CSNS21B/problems/GAMEW

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
        string s;
        cin>>s;
        int c=1;
        char ch=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(ch!=s[i])
            {
                ch=s[i];
                c++;
            } 
        }
        
        if(c%3==0 ||c%3==1)
        cout<<"SAHID"<<"\n";
        else
        cout<<"RAMADHIR"<<"\n";
       
        
        
    }
    return 0;
}
