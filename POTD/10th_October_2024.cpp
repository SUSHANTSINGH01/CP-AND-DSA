class Solution {
  public:
    int maxDistance(vector<int>&arr) {
        // Code here
        
        int res=0;
        unordered_map<int,vector<int>>mp;
        
        for(int i=0; i<arr.size();i++)
        mp[arr[i]].push_back(i),
        res=max(res,mp[arr[i]][mp[arr[i]].size()-1]-mp[arr[i]][0]);
        
        return res;
    }
};
