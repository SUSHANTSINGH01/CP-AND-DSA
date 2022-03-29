class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        
       int l=0;
        int r=nums.size()-1;
        if(nums.size()<=2)
        {
            if(nums.size()==1)
            return (nums[0]==target)?0:-1;
            else if(nums[0]==target)
            return 0;
            else if(nums[1]==target)
            return 1;
            else 
            return -1;
        }
        while(l<=r)
        {
            int mid=(l+r)/2;
           
            if(nums[mid]==target)
            return mid;
           
            
            if(nums[mid]>=nums[l])
            {
                if(target>=nums[l] && nums[mid]>=target)
                r=mid-1;
                else
                l=mid+1;
            }
            else
            {
                if(target>=nums[mid] && nums[r]>=target)
                l=mid+1;
                else
                r=mid-1;
            }
            
        }
        return -1;
    }
};
