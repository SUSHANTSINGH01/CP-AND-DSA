class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) 
    {
        int x = (points[0][0] - points[1][0])*(points[0][1]-points[2][1]);
        int y = (points[0][0] - points[2][0])*(points[0][1]-points[1][1]);
        return !(x==y);
    }
};
