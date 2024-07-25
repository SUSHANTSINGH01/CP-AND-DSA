

// first approach


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


// Second Approach 


class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        queue<pair<int,int>>vp;
        vp.push({sr,sc});

        int start = image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m, false));
        int xCoord[4] = {1,0,-1,0};
        int yCoord[4] = {0,1,0,-1};

        while(!vp.empty()){
            int x=vp.front().first;
            int y=vp.front().second;
            vp.pop();
            image[x][y]=color;
            for(int i=0;i<4;i++){
               int new_x=x+xCoord[i];
               int new_y=y+yCoord[i];
               if(new_x>=0 && new_y>=0 && new_x<n && new_y<m){
                    if(image[new_x][new_y]==start && vis[new_x][new_y]==false){
                         vp.push({new_x,new_y});
                    }
                    vis[new_x][new_y]=true;
               }
            }
        }
        return image;
    }
};
