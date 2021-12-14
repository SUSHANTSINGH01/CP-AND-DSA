class Solution {
public:
    double area(vector<int> a, vector<int> b, vector<int> c)
    {
        return (double)abs(a[0]*(b[1]-c[1]) + b[0]*(c[1]-a[1]) + c[0]*(a[1]-b[1]))/2;
    }
    
    double largestTriangleArea(vector<vector<int>>& points) 
    {
        int n=points.size();
        double ans=INT_MIN;
        for(int i=0; i<n-2; i++)
        for(int j=i; j<n-1; j++)
        for(int k=j; k<n; k++)
        ans=max(ans, area(points[i],points[j],points[k]));
        return ans;
    }
};
