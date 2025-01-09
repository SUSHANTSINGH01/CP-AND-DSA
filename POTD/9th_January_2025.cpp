class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        unordered_map<int,int>mp;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp[sum-target]>0){
                return {mp[sum-target]+1,i+1};
            }
            if((sum-target)==0){
                return {1,i+1};
            }
            mp[sum]=i+1;
        }
        return {-1};
        
    }
};
