class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int n=arr.size();
        int m=arr[0].size();
        int maxx=0;
        int c=0;
        int res=-1;
        for(int i=0;i<n;i++){
            c=0;
            for(int j=0;j<m;j++){
                if(arr[i][j]==1)
                c++;
            }
            if(c>maxx)
            {
              maxx=c;
              res=i;
            }
        }
        return res;
    }
};
