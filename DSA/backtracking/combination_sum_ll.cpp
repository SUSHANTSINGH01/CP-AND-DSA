void solve(int st,int sum,vector<int> &ans, vector<vector<int>> & res,vector<int> &A)
    {
        if(sum==0)
        {
            res.push_back(ans);
            return;
        }
            
        if(sum<0)
        return;
            
        int n=A.size();
        for(int i=st;i<n;++i)
        {
            if(A[i]==A[i-1] && (i-1)>=st)          
            continue;                           
            ans.push_back(A[i]);
            solve(i+1,sum-A[i],ans,res,A);
            ans.pop_back();
        }
    }



vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int>>res;
    vector<int>ans;
    sort(A.begin(),A.end());
    solve(0,B,ans,res,A);
    return res;
}
