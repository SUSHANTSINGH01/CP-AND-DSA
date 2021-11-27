class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count(nums.begin(),nums.end(),nums[i])==1)
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};

// optimal solution 

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res=0;
        for(int i=0;i<=31;i++) 
        {
            int ch=1<<i;
            //cout<<ch<<" ";
            int count=0;
            for(auto child : nums) 
            {
                //cout<<(child & ch)<<" ";
                    if(child & ch)
                    count += 1;
            }
            if(count%3==1) 
            res=res|ch;
           // cout<<res<<" ";
            //cout<<endl<<" ";
        }

        return res;
    }
};
