class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        
        vector<vector<string>>res;
        int n=arr.size();
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string temp = arr[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(arr[i]);
        }
        
        for(string str:mp){
            res.push_back(str.second);
        }
        
        return res;
    }
};
