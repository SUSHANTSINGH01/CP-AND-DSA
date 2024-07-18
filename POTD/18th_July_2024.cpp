class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        // Code here
        
        int increment=0;
        int decrement=0;
        int n=arr.size();
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            increment=decrement+1;
            else if(arr[i]<arr[i-1])
            decrement=increment+1;
        }
        
        return max(increment,decrement)+1;
    }
};
