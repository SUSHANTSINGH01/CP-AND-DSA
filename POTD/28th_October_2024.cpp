class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        vector<int>res;
        bool vis[101]; 
        for(int i=0;i<101;i++){
            vis[i]=false;
        }
        for(int i=0;i<arr.size();i++){
            if(!vis[arr[i]]){
                res.push_back(arr[i]);
                vis[arr[i]]=true;
            }
        }
        return res;
    }
};
