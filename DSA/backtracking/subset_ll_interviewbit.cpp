    void solve(int index,vector<int>&A,vector<string>&ans,string &temp)
    {
      ans.push_back(temp);
      for(int i=index;i<A.size();i++)
      {
            temp.push_back(A[i]);
            solve(i+1,A,ans,temp);
            temp.pop_back();
      }
    }
    

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) 
{
        vector<vector<int>>res;
        vector<string>ans;
        string temp="";
        sort(A.begin(),A.end());
        solve(0,A,ans,temp);
        sort(ans.begin(),ans.end());
        unordered_set<string>st;
        for(int i=0;i<ans.size();i++)
        {
            vector<int>ans1;
            string str=ans[i];
            if(st.find(str)==st.end())
            {
                for(int j=0;j<str.size();j++)
                ans1.push_back(int(str[j]));
                
                res.push_back(ans1);
                st.insert(str);
            }
        }
        
        return res;
}
