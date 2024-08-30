class Solution{
public:

    bool is_safe(int row, int col, vector<int>&curr, int n)
    {
          
        for(int i=0;i<col;i++)
        if(row+1==curr[i])
        return 0;
        
        int row1=row;
        int col1=col;
        
        while(row>0 and col>0)
        {
            row--; 
            col--;
            if(curr[col] == row+1)    
            return 0;
        }
        
        col=col1;
        row=row1;
    
        while(row<n and col>0)
        {
            row++; 
            col--;
            if(curr[col]==row+1)    
            return 0;
        }
        return 1;
    }
    
    void solve(int col, vector<int>&cur, vector<vector<int>>&res, int n)
    {
        if(col==n)
        {
            res.push_back(cur);
            return ;
        }
        
        for(int row=0;row<n;row++)
        {
            if(is_safe(row,col,cur,n))
            {
                cur.push_back(row+1);
                solve(col+1,cur,res,n);
                cur.pop_back();
            }
        }
    }
    
    vector<vector<int>> nQueen(int n) {
        // code here
        
        vector<vector<int>>res;
        vector<int>vec;
        
        solve(0,vec,res,n);
        return res;
    }
};
