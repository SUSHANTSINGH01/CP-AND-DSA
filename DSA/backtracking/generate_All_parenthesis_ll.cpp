 void solve(int pos,int n,int open,int close,vector<string>&ans,char str[])
    {
        if(close==n)
        {
            ans.push_back(str);
            return;
        }
        else
        {
            if(open>close)
            {
                str[pos] = ')';
                solve(pos+1,n,open,close+1,ans,str);
            }

            if(open<n)
            {
                str[pos] = '(';
                solve(pos+1,n,open+1,close,ans,str);
            }
        }
    }
vector<string> Solution::generateParenthesis(int A) 
{
        vector<string>ans;
        char str[10005];
        solve(0,A,0,0,ans,str);
        sort(ans.begin(),ans.end());
        return ans;
}
