class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int maxx=0;
        for(int i=0;i<nums.size();i++)
        {
            maxx=max(maxx-1,nums[i]);
            if(maxx==0 && i!=nums.size()-1)
            return 0;
            
            
        }
        return 1;
        
    }
};
