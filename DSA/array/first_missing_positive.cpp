class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int arr[500005];
        for(int i=0;i<500005;i++)
        arr[i]=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0 && nums[i]<500005)
            arr[nums[i]]++;
        }
        for(int i=1;i<500005;i++)
        if(arr[i]<1)
        return i;
        return -1;
    }
};
