class Solution {
    public int countTriangles(int arr[]) {
        // code here
       Arrays.sort(arr);
       
       int l=0;
       int r=0;
       
       int n = arr.length;
       int res =0; 
       
       for(int i=2;i<n;i++){
         
         l=0;
         r=i-1;
         
        while(l<r){
           if(arr[l]+arr[r]>arr[i]){
               res+=(r-l);
               r--;
           }else
           l++;
        }
           
       }
       return res;
    }
}
