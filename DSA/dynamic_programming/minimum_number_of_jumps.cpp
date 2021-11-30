class Solution{
  public:
  
    int minJumps(int arr[], int n){
        
        // Your code here
        int sum=arr[0];
        int next=arr[0];
        int c=1;
        if (arr[0]==0)
        return -1;
        for (int i=1;i<n;i++) 
       {
         if (i>=n-1)
         return c;
         next=max(next,i+arr[i]);
         sum--;
         if(sum==0) 
        {
            c++;
            if(next<=i)
            return -1;
            sum=next-i;
        }
        }
    
        
    }
};
