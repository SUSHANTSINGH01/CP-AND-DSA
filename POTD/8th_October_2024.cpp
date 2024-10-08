class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        
        int n=arr.size();
        int num1=0;
        int num2=0;
        
        for(int i=0;i<n;i++){
            num1=max(num1,arr[i]);
        }
        
        for(int i=0;i<n;i++){
            if(num1!=arr[i]){
                num2=max(num2,arr[i]);
            }
        }
        
        return num1+num2;
    }
};
