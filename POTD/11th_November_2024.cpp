class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        // Code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int sum=0;
        
        for(int i=1;i<n;i++){
            if(arr[i-1]>=arr[i]){
                sum+=(arr[i-1]-arr[i]+1);
                arr[i]+=(arr[i-1]-arr[i]+1);
            }
        }
        return sum;
    }
};
