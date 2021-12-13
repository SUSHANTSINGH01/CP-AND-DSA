class Solution {
public:
    int sum=0;
    int temp=0;
    void solve(vector<int>nums,int start,int end){
        
        if(start==end)
        {  
            sum+=temp;
            return;
        }
        solve(nums,start+1,end);
        temp=temp^nums[start];
        solve(nums,start+1,end);
        return; 
    }
    int subsetXORSum(vector<int>& nums)
    {
        
        if(nums.size()==0)
        return 0;
        
        solve(nums,0,nums.size());
        
        return sum;
    }
};
