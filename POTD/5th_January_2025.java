class Solution {
    int countPairs(int arr[], int target) {
        // Your code here
        int n=arr.length;
        Arrays.sort(arr);
        int res=0;
        for(int i=0;i<n-1;i++){
            int l=i+1;
            int r=n-1;
            
            while(l<=r){
                int mid=(l+r)/2;
                if(arr[mid]+arr[i]<target)
                l=mid+1;
                else
                r=mid-1;
            }
            res+=(l-1-i);
        }
        return res;
    }
}
