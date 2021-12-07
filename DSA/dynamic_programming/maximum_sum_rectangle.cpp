class Solution {
  public:
    
    int maxxsum(int arr[], int n)
   {
      int maxsum = INT_MIN;
      int currsum = 0;
      
      for(int i = 0; i < n; i++)
      {
           currsum += arr[i];
          
           if(currsum > maxsum)
              maxsum = currsum;
           
           if(currsum < 0)
              currsum = 0;
      }
     return maxsum;
   }
   
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        
           int res = INT_MIN;
           for(int i = 0; i < R; i++)
           {
               int temp[C] = { 0 };
               for(int row = i; row < R; row++)
               {
                   for(int j = 0; j < C; j++)
                   temp[j] += M[row][j];
                     
                   res = max(res,maxxsum(temp, C));
               }
           }
           return res;
    }
};
