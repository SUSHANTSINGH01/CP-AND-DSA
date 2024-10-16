class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int n=arr.size();
        int c=2;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1] && c>0){
                c--;
                swap(arr[i],arr[arr[i]-1]);
                i--;
            }
        }
        
        if(c==1)
        return 0;
        
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])
            return false;
        }
        
        return true;
    }
};
