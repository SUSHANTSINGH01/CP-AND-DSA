class Solution{
public:
    int pageFaults(int N, int C, int pages[])
    {
        // code here
      vector<int>ans; 
      int falts=0;
      vector<int>::iterator it;
      for(int i=0;i<N;i++)
      {
          it=find(ans.begin(),ans.end(),pages[i]);
          if(it==ans.end())
          {
              if(ans.size()==C)
              ans.erase(ans.begin());
              ans.push_back(pages[i]);
              falts++;
          }
          else
          {
              ans.erase(it);
              ans.push_back(pages[i]);
          }
      }
      return falts;
    }
};
