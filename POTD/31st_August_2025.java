class Solution {
    public int maxWater(int arr[]) {
        // Code Here
        
        int maxx = 0;
        int n = arr.length;
        int l = 0;
        int r = n-1;
        
        while(l<r){
            int minn = Math.min(arr[r],arr[l]);
            maxx  = Math.max(minn*(r-l),maxx);
            
            if(arr[l]<arr[r])
            l++;
            else
            r--;
        }
        
        return maxx;
    }
}
