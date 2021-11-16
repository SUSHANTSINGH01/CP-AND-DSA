class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) 
    {
        unordered_map<int, int>mp;
        int  n = board[0].size();
        int dir = 1;
        int index = 1; 
        for(int i=n-1;i>=0;i--) 
        {
            if(dir==1)
            {
                for(int j = 0; j < n; j++) 
                {
                    if(board[i][j] != -1)
                    mp[index] = board[i][j];
                    index++;
                }
            }
            else
            {
                for(int j = n - 1; j >= 0; j--) 
                {
                    if(board[i][j] != -1)
                    mp[index] = board[i][j];
                    index++;
                }
            }
            dir=-dir;
            
        }
       
		int m=n*n+1;
        vector<int>dist(m, -1);
        queue<int>q;
        q.push(1);
        dist[1] = 0;
        while (!q.empty())
        {
            int v=q.front(); 
            q.pop();
            if (v== n*n) 
            return dist[n*n];
            for (int k=1;k<=6;k++) 
            {
                int temp=v+k;
                if (temp>n*n) 
                break;
                if (mp.find(temp) != mp.end()) 
                temp = mp[temp];
                if (dist[temp] == -1) 
                {
                    dist[temp] = dist[v] + 1;
                    q.push(temp);
                }
                
            }
        }
        
        return -1;
    }
};
