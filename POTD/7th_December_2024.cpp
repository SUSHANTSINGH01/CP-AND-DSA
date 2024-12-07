class Solution {
  public:
    // Function to count inversions in the array.
    void merge(vector<int>&arr,int &res,int l,int r){
        int mid=(l+r)/2;
        int temp[r-l+1];
        int i=l;
        int j=mid+1;
        int k=0;
        while(i<=mid && j<=r){
            if(arr[j]<arr[i]){
                res+=((mid-i)+1);
                temp[k++]=arr[j++];
            }else
            temp[k++]=arr[i++];
        }
        while(i<=mid)
        temp[k++]=arr[i++];
        
        while(j<=r)
        temp[k++]=arr[j++];
        
        for(int m=l;m<=r;m++)
        arr[m]=temp[m-l];
    }
    void mergeSort(vector<int>&arr,int &res,int l,int r){
        if(r<=l)
        return;
        else{
            int mid=(l+r)/2;
            mergeSort(arr,res,l,mid);
            mergeSort(arr,res,mid+1,r);
            merge(arr,res,l,r);
            return;
        }
    }
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int res=0;
        int N=arr.size();
        mergeSort(arr,res,0,N-1);
        return res;
    }
};
