class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        
        int n=arr1.size();
        int l=0;
        int r=n-1;
        
        while(l<r){
            
            int m1=(r+l)/2;
            int m2=n-m1-2;
            
            int a=arr1[m1];
            int b=arr2[m2];
            int c=arr2[m2+1];
            int d=arr1[m1+1];
            
            if(a<=c && b<=d)
            return max(a,b)+min(c,d);
            
            if(a<=c)
            l=m1+1;
            else
            r=m1;
        }
        
        if(arr1[n-1]<=arr2[0])
        return arr1[n-1]+arr2[0];
        
        return arr2[n-1]+arr1[0];
    }
};
