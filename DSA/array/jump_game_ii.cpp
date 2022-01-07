class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int mx_i=0;
        int cr_i=0;
        int c=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            mx_i = max(mx_i, nums[i]+i);
            if(i==cr_i)
            {
               cr_i=mx_i;
               c++;
            }
        }
        return c;
    }
};
