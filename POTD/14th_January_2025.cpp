class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        long long int total_sum=0;
        long long int half_sum=0;
        
        for(int i=0;i<n;i++)
        total_sum+=arr[i];
        
        half_sum=arr[0];
        for(int i=1;i<n;i++){
            if(half_sum==((total_sum-arr[i])/2) && (total_sum-arr[i])%2==0)
            return i;
            else
            half_sum+=arr[i];
        }
        
        return -1;
    }
};
