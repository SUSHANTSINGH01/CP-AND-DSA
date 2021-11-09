class Solution {
public:
    
    int orangesRotting(vector<vector<int>>& grid) 
    {
        
        int p=0;
        int count=0;
        int time=0;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                q.push({i,j});
                
                if(grid[i][j]!=0) 
                p++;
            }
        }
        
        int arr_x[4]={0,0,1,-1};
        int arr_y[4]={1,-1,0,0};
        while(!q.empty())
        {
            int s=q.size();
            count+=s;
            while(s--)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int next_x=x+arr_x[i];
                    int next_y=y+arr_y[i];
                    if(next_x<0 || next_y<0 || next_x>=n || next_y>=m || grid[next_x][next_y]!=1) 
                    continue;
                    grid[next_x][next_y]=2;
                    q.push({next_x,next_y});
                }
            }
            if(!q.empty()) 
            time+=1;
        }
        if(count==p) 
        return time;
        return -1;
    }
};
