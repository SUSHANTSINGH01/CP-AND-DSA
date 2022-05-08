    bool is_valid(int n,int r,int c,vector<int>&ans)
    {
        if(r<0 || r>=n || c<0 || c>=n)
        return false;
        for(int i=0;i<r;i++)
        {
            if(c==ans[i] || abs(c-ans[i])==abs(r-i))
            return false;
        }
        return true;
    }
    void solve(int i,int n,vector<vector<string>>&res,vector<string>&str,vector<int>&ans,string &s)
    {
        if(i==n)
        {
            str.clear();
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(ans[i]==j)
                    s.push_back('Q');
                    else
                    s.push_back('.');
                }
                str.push_back(s);
                s.clear();
            }
            res.push_back(str);
            return;
        }
        for(int j=0;j<n;j++)
        {
            if(is_valid(n,i,j,ans))
            {
                ans.push_back(j);
                solve(i+1,n,res,str,ans,s);
                ans.pop_back();
            }
        }
    }
vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        vector<vector<string>>res;
        vector<string>str;
        vector<int>ans;
        string s;
        solve(0,A,res,str,ans,s);
        return res;
}
