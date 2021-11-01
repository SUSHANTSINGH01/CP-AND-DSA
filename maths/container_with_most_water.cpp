class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        long long int maxx=0;
        long long int pres=0;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            if(height[i]<=height[j])
            {
                pres=(height[i])*(j-i);
                i++;
            }
            else
            {
                pres=(height[j])*(j-i);
                j--;
            }
            maxx=max(maxx,pres);
        }
        return maxx;
    }
};
