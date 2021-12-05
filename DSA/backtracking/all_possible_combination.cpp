void solve(vector<string>&ans,int j,int n,string &str,vector<string>&A)
{
    if(str.length()==n)
    {
        ans.push_back(str);
        return ;
    }
    for(int i=0;i<A[j].length();i++)
    {
        str.push_back(A[j][i]);
        solve(ans,j+1,n,str,A);
        str.pop_back();
    }
};
vector<string> Solution::specialStrings(vector<string> &A) {
   
    vector<string>ans;
    string ans="";
    solve(ans,0,A.size(),str,A);
    return ans;
}
