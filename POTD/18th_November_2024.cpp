class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int i=0;
        int N=arr.size();
        for(i=N-1;i>0;i--)
        {    
            // finding first graeter element 
            if(arr[i]>arr[i-1])
            break;
        }
        if(i==0)
        reverse(arr.begin(),arr.end());    
        else 
        {
            int x=arr[i-1];
            int s=i;           
            for(int j=i+1;j<N;j++)
            {    
                //finding min element which is  greater than arr[i-1]
                if(arr[j]>x && arr[j]<=arr[s])
                s=j;
            }
            
            swap(arr[i-1],arr[s]);    
            sort(arr.begin()+i,arr.end());     
        }
          
    }
};
