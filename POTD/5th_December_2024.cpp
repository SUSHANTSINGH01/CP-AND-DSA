class Solution {
    // Function to sort an array of 0s, 1s, and 2s
    void swap(int[] arr,int i, int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    public void sort012(int[] arr) {
        // code here
        int n=arr.length;
        int i=0;
        int j=0;
        int k=n-1;
        while(j<=k){
            if(arr[j]==0){
                swap(arr,i,j);
                i++;
                j++;
            }
            else if(arr[j]==1)
            j++;
            else{
                swap(arr,k,j);
                k--;
            }
            
        }
        return ;
    }
}
