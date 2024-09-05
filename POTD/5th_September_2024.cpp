class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        
        int total=(n*(n+1))/2;
        int sum=0;
        
        for(int i=0;i<n-1;i++)
        sum+=arr[i];
        
        return total-sum;
    }
};
