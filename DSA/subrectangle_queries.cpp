class SubrectangleQueries {
public:
    
    vector<vector<int>>v; 
    vector<vector<int>>v2; 
    SubrectangleQueries(vector<vector<int>>& rectangle) 
    {
        v=rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) 
    {
        v2.push_back({row1,col1,row2,col2,newValue});
    }
    
    int getValue(int row, int col) 
    {
      
        for(int i=v2.size()-1;i>=0;i--) 
        {
            if(row>=v2[i][0] && row<=v2[i][2] && col>=v2[i][1] && col<=v2[i][3])
            return v2[i][4];
        }
        return v[row][col];
    }
};

