class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<k;i++)
        mp[arr[i]]++;
        
        int c=0;
        res.push_back(mp.size());
        
        for(int j=k;j<arr.size();j++){
            mp[arr[c]]--;
            if(mp[arr[c]]<=0)
            mp.erase(arr[c]);
            c++;
            mp[arr[j]]++;
            res.push_back(mp.size());
        }
        
        return res;
        
    }
};
