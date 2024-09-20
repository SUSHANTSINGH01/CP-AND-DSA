class Solution {
    // Returns count buildings that can see sunlight
    public int countBuildings(int[] height) {
        // code here
        int n=height.length;
        
        int maxx=height[0];
        int c=1;
        
        for(int i=1;i<n;i++)
        if(maxx<height[i]){
            maxx=height[i];
            c++;
        }
        
        return c;
    }
}
