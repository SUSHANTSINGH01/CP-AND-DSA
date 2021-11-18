class Solution {
public:
    vector<int>ans;
    Solution(vector<int>& nums) 
    {
        ans=nums;
    }
    
    vector<int> reset() 
    {
        return ans;
        
    }
    
    vector<int> shuffle() 
    {
         vector<int>ans1=ans;
         int n=ans1.size();
         for(int i=0;i<n;i++)
         {
             int z=rand()%n;
             swap(ans1[i],ans1[z]);
         }
        
        return ans1;   
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
