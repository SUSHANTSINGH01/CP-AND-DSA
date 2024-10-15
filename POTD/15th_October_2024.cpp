class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        
        
        int res=0;
        int curr_sum=0;
        int prefix_sum=0;
        unordered_map<int,int>mp;
        
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            curr_sum+=arr[i];
            prefix_sum=curr_sum-tar;
            
            if(mp[prefix_sum]>0)
            res+=mp[prefix_sum];
            
            mp[curr_sum]++;
        }
        return res;
    }
};
