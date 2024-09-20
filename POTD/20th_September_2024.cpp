class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        // code here
        
        int n=height.size();
        
        int maxx=height[0];
        int c=1;
        
        for(int i=1;i<n;i++)
        if(maxx<height[i]){
            maxx=height[i];
            c++;
        }
        
        return c;
    }
};
