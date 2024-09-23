class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        
        int n=arr.size();
        
        for(int i=0;i<n;i++){
              if(arr[i]==i+1)
              continue;
              while(arr[i]!=i+1){
                if(arr[i]==arr[arr[i]-1])
                break;
                swap(arr[i],arr[arr[i]-1]);
              }
          }
        
        for(int i=0;i<n;i++)
        if(arr[i]!=i+1)
        return {arr[i],(i+1)};
        
        return {-1,-1};
    }
};
