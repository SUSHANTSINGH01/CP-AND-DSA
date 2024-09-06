class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        
        int res=INT_MIN;
        int curr_max=0;
        
        for(int i=0;i<arr.size();i++){
            curr_max+=arr[i];
            
            res=max(res,curr_max);
            
            if(curr_max<0)
            curr_max=0;
            
        }
        
        return res;
        
    }
};
