// Iterative 

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

//recursive

class Solution {
public:
    
    void solve(int index,vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp)
    {
      ans.push_back(temp);
      for(int i=index;i<nums.size();i++)
      {
           temp.push_back(nums[i]);
            solve(i+1,nums,ans,temp);
            temp.pop_back();
      }
  }
    
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,nums,ans,temp);
        return ans;
    }
};
