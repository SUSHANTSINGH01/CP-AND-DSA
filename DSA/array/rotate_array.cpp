// greedy 

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        
       vector<int>ans;
        k=k%nums.size();
        int k1=nums.size()-k;
        cout<<k1<<"\n";
        
        for(int i=k1;i<nums.size();i++)
        ans.push_back(nums[i]);
        for(int i=0; i>=0 && i<k1; i++)
        ans.push_back(nums[i]);
        
        for(int i=0;i<nums.size();i++)
         nums[i]=ans[i];
    }
};




// optimized 

class Solution {
public:
     
    void rotate(vector<int>& nums, int k) 
    {
        
        int length=nums.size();
        if (length==k || k==0) 
        return;
        
        
        int d=__gcd(length, k);
        int temp;
        int tmp1;
        int j=0; 
        cout<<d;
        for (int i=0;i<d;i++)
        {
            temp = nums[i];
            for(int l=0;l<length/d;l++) 
            {
                j=(i+k)%length;
                tmp1 = nums[j];
                nums[j] = temp;
                i=j;
                temp = tmp1;
            }
        }
    }
};
