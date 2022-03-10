class Solution {
public:
    vector<int> constructRectangle(int area) 
    {
        int sq=sqrt(area);
         
        while(area%sq!=0)
        sq--;
         
        return {area/sq,sq};
        
    }
};
