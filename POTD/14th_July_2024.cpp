class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        
        int l=0;
        int r=arr.size()-1;
        
        while(l<r){
            if(arr[l]==1){
                if(arr[r]==0)
                swap(arr[r--],arr[l++]);
                else
                r--;
            }else
            l++;
        }
        
        return;
    }
};
