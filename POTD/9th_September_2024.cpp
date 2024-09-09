class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        
        int n=arr.size();
        int i=0;
        int j=0;
        int k=n-1;
        
        while(j<=k){
            
            if(arr[j]==0){
                swap(arr[i],arr[j]);
                i++;
                j++;
            }
            
            else if(arr[j]==1)
            j++;
            
            else{
                swap(arr[k],arr[j]);
                k--;
            }
            
        }
        
        return ;
    }
};
