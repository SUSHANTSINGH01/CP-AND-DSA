class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        // code here
        int res=-1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]+arr[i-1]>res) {
                res=arr[i]+arr[i-1];
            }
        }
        return res;
        
    }
};
