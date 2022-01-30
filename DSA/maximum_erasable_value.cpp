class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        
         int n=nums.size();
         unordered_map<int,int>mp;
         int i=0;
         int maxsum=0;
         int sum=0;
         
         int c=0; 
    
         for(int j=0; j<n; j++)
         {
             sum+=nums[j];
             mp[nums[j]]++;
             if(mp[nums[j]] == 1) 
             c++;

             if(j-i+1>c)
             {
                 while(j-i+1>c)
                 {
                     sum-=nums[i];
                     mp[nums[i]]--;
                     if(mp[nums[i]]==0) 
                     c--;
                     i++;
                 }
             }
             
             maxsum=max(maxsum,sum);
         }
       return maxsum;
    }
};
