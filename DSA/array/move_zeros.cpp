class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i] == 0) 
            ans ++;
            else
            swap(nums[i], nums[i-ans]);
        }
        
    }
};
