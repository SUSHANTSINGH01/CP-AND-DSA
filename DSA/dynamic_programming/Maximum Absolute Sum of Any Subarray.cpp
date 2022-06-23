class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int curr=0;
        int maxx=0;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            
            if((curr)<(nums[i]))
            curr=nums[i];
            
            maxx=max(maxx,(curr));
            nums[i]=-nums[i];
        }
        curr=0;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            
            if(curr<nums[i])
            curr=nums[i];
            
            maxx=max(maxx,curr);
            
        }
        return maxx;
    }
};
