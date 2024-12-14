class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        int l=0;
        int r=arr.size()-1;
        while(l<=r){
            int mid=(r+l)/2;
            if(arr[mid]==key)
            return mid;
            else if(arr[l]<=arr[mid]){
                if(arr[l]<=key && key<=arr[mid])
                r=mid-1;
                else
                l=mid+1;
            }else{
                if(arr[mid]<=key && key<=arr[r])
                l=mid+1;
                else
                r=mid-1;
            }
        }
        return -1;
    }
};
