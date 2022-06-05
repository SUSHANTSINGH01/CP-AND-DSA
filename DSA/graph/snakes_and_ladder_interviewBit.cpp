int Solution::snakeLadder(vector<vector<int>>&A, vector<vector<int>>&B) 
{
     unordered_map<int,int>mp;
     vector<int>dist(101,-1);
     dist[1]=0;

     for(int i=0;i<A.size();i++)
     mp[A[i][0]]=A[i][1];

     for(int i=0;i<B.size();i++)
     mp[B[i][0]]=B[i][1];

     queue<int>q;
     q.push(1);
     
     while(!q.empty())
     {
          int temp=q.front();
          q.pop();

          if(temp==100)
          return dist[100];

          for(int i=1;i<=6;i++)
          {
            int val=temp+i;
            
            if(mp.count(val)==1)
            val=mp[val];

            if(dist[val]==-1)
            {
                dist[val]=dist[temp]+1;
                q.push(val);
            }
          }
     }
     
     if(dist[100]==-1)
     return -1;

     return dist[100];
}
