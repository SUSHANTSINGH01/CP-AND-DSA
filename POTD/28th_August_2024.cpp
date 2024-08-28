class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        
        int n=arr.size();
        unordered_map<int,int>mp;
        vector<pair<int,int>>vec;
        vector<int>res;

        for(int i=0;i<n;i++) 
        mp[arr[i]]++;
        
        for(pair<int,int> it:mp) 
        vec.push_back({it.first, it.second});
        
        sort(vec.begin(),vec.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            if(a.second==b.second) 
            return a.first<b.first; 
          
            return a.second>b.second; 
        });

        for(int i=0;i<vec.size();i++) 
        for(int j=0;j<vec[i].second;j++) 
        res.push_back(vec[i].first);
            
        return res;
    }
};
