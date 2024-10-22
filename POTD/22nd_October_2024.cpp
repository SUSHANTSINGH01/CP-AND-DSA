class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
        
        unordered_map<int,int>mp;
        int res=0;
        int sum=0;
        mp[0]=1;
        for(auto ele:arr)
        {
            if(ele==x)
            sum++;
            
            else if(ele==y)
            sum--;
            
            res+=mp[sum];
            mp[sum]++;
        }
        
        return res;
    }
};
