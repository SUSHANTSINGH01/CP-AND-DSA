class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int res=0;
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            
            while(l<r){
                if(arr[i]+arr[l]+arr[r]<target)
                l++;
                else if(arr[i]+arr[l]+arr[r]>target)
                r--;
                else{
                    res++;
                    int temp=r-1;
                    while(temp>l && arr[temp]==arr[temp+1]){
                        res++;
                        temp--;
                    }
                    l++;
                }
            }
        }
        return res;
    }
};
