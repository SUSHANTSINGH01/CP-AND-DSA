#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
        // Code Here
       set<char>st;
       
       for(int i=0;i<a.length();i++)
       st.insert(a[i]);
       
       char ch1;
       char ch2;
       
       for(int i=0;i<a.length();i++)
       {
           ch1=a[i];
           st.erase(ch1);
           ch2=*(st.begin());
           
           if(st.empty()==1)
           return a;
           
           if(ch2<ch1)
           break;
       }
       for(int i=0;i<a.length();i++)
       {
           if(a[i]==ch1)
           a[i]=ch2;
           
           else if(a[i]==ch2)
           a[i]=ch1;
        }
        return a;
   }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
