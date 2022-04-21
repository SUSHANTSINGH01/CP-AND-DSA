class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int sum=0;
        int minn=1e9;
        
        for(auto it:nums)
        {
            minn=min(minn,it);
            sum+=it;
        }
        return sum-nums.size()*minn;
    }
};
