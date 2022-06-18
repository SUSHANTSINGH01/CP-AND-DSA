class Solution {
public:
    int solve(int x, int y, vector<vector<int>>&A, int n, int m)
    {
        int X[8]={0,-1,-1,-1,0,1,1,1};
        int Y[8]={1,1,0,-1,-1,-1,0,1};
        for(int i=0;i<8;i++)
        {
            int new_x=x;
            int new_y=y;
            while(new_x<n && new_y<m && new_x>=0 && new_y>=0)
            {
                new_x+=X[i];
                new_y+=Y[i];
                
                if(new_x<n && new_y<m && new_x>=0 && new_y>=0 && A[new_x][new_y]==2)
                return 1;
                
                if(new_x<n && new_y<m && new_x>=0 && new_y>=0 && A[new_x][new_y]==1)
                break;
                
            }
        }
        return 0;
    }
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
     
        int n=queens.size();
        int m=2;
        vector<vector<int>>res;
        vector<vector<int>>chess(8,vector<int>(8,0));
        
        for(int i=0;i<n;i++)
        chess[queens[i][0]][queens[i][1]]=1;
        
        chess[king[0]][king[1]]=2;
        
        for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        if(chess[i][j]==1)
        {
            if(solve(i,j,chess,8,8))
            res.push_back({i,j});
        }
    
        return res;
    }
};
