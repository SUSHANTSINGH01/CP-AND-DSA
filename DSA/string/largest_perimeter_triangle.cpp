class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        int res=0;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]+nums[i+1]>nums[i+2])
            {
                res=nums[i]+nums[i+1]+nums[i+2];
                break;
            }
        }
        return res;
    }
};
