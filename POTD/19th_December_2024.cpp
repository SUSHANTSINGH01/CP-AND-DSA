class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int j=0;
        for(int i=1;i<arr[arr.size()-1];i++){
            if(i!=arr[j]){
                if(k>1)
                k--;
                else
                return i;
            }
            else
            j++;
        }
        
        if(k>=1)
        return arr[arr.size()-1]+k;
        return -1;
    }
};
