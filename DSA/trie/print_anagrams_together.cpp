class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) 
    {
        //code here
        vector<vector<string>>ans;
        vector<string>str;
        unordered_map<string,vector<int>>mp;
        int n=string_list.size();
        for(int i=0;i<n;i++)
        {
            string s=string_list[i];
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        
        }
        for(auto it:mp)
        {
            vector<int>res=it.second;
            for(int i=0;i<res.size();i++)
            str.push_back(string_list[res[i]]);
            ans.push_back(str);
            str.clear();
        }
        return ans;
    }
};
