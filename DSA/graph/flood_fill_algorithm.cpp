class Solution {
public: 
void solve(vector<vector<int>>& image,int x,int y,int r,int c,int nclr,int clr)
    {
		
        if(x<0||y<0||x>r||y>c||image[x][y]!=clr)
        return;
        
		image[x][y]=nclr;
        
        solve(image,x-1,y,r,c,nclr,clr);   
        solve(image,x+1,y,r,c,nclr,clr);    
        solve(image,x,y-1,r,c,nclr,clr);    
        solve(image,x,y+1,r,c,nclr,clr);    
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int clr=image[sr][sc];
        int r=image.size();
        int c=image[0].size();
        
        if(clr==newColor)
        return image;
        
		solve(image,sr,sc,r-1,c-1,newColor,clr);
        return image;
    }
};
