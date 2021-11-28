class Solution{
	public:
	vector<string>ans;
    void solve(int i,int n,string s,string ans1)
    {
        if(i==n)
        {
           if(ans1.length()>0)
           ans.push_back(ans1) ;
           return;
        }
        else if(i<n)
        {
         solve(i+1,n,s,ans1);
         ans1.push_back(s[i]);
         solve(i+1,n,s,ans1);
         return;  
        }
        
    }
		vector<string> AllPossibleStrings(string s)
		{
		    // Code here
		    int i=0;
            int n=s.length();
       
            solve(0,n,s,"");
            sort(ans.begin(),ans.end());
            return ans;
		}
		
};

// optimal solution

class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		   vector<string>ans;
           int n=s.length();
           for(int i=0;i<(1<<n);i++)
           {
                string res="";
                for(int j=0;j<n;j++)
                {
                    if((i&(1<<j)))
                    res+=s[j];
                }
                
                if(res!="")
                ans.push_back(res);
            }
           
           sort(ans.begin(),ans.end());
           return ans;
		}
};
