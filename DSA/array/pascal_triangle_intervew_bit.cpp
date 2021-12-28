vector<vector<int> > Solution::solve(int A)
{
        vector<vector<int>>res;
        vector<int>ans;
        ans.push_back(1);
        if(A==0)
        return res;
        res.push_back(ans);
        if(A==1)
        return res;
        ans.push_back(1);
        res.push_back(ans);
        if(A==2)
        return res;
        ans.clear();
        for(int i=2;i<A;i++)
        {
            ans.push_back(1);
          for(int j=1;j<=i;j++)
          {
              if(i==j)
              ans.push_back(1);
              else
              {
                  int temp=res[i-1][j]+res[i-1][j-1];
                  ans.push_back(temp);
              }
          }
          res.push_back(ans);
          ans.clear();
      }
       return res; 
}
