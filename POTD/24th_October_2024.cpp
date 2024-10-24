class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int>&arr) {
        // Complete the function
        
        int n=arr.size();
        vector<int>res;
        int k=0;
        
        for(int i=0;i<n-1;i++){
            if(arr[i]!=0){
                if(arr[i]==arr[i+1]){
                    arr[i]=2*arr[i];
                    arr[i+1]=0;
                }
            }
        }
        
        
        while(k<n){
            if(arr[k]!=0)
            res.push_back(arr[k]);
            k++;
        }
        
        k=0;
        while(k<n){
            if(arr[k]==0)
            res.push_back(arr[k]);
            k++;
        }
        
        return res;
    }
};
