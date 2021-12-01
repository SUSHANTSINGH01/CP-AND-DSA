class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum=0;
        int sum1=INT_MIN;
        for(int i=0;i<n;i++)
        {
        
        sum=sum+arr[i];
        if(sum<arr[i])
        sum=arr[i];
        if(sum1<sum)
        sum1=sum;
        
        
    }
    return sum1;
    }
};
