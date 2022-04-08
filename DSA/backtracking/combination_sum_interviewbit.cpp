   void solve(int start, vector<int>&row, int sum, vector<vector<int>>& res, vector<int>& A, int B)
   {
        if(sum>=B)
        {
            if(sum==B)
            res.push_back(row);
            return;
        }
        
        if(start==A.size())
        return;
            
        row.push_back(A[start]);
        sum+=A[start];
        solve(start, row, sum, res, A, B);
        sum-=row[row.size()-1];
        row.pop_back();
        solve(start+1, row, sum, res, A, B);
    }

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) 
{
        vector<vector<int>>res;
        vector<int>row;
        vector<int>ans;
        sort(A.begin(), A.end());
        ans.push_back(A[0]);
        
        for(int i=1; i<A.size(); i++)
        if(A[i-1]!=A[i])
        ans.push_back(A[i]);
        
        solve(0, row, 0, res, ans, B);
        return res;
}
