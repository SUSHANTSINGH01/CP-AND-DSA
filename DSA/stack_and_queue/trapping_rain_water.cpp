class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        
        vector<int>pre(n);
        vector<int>post(n);
        
        pre[0]=height[0];
        for(int i=1;i<n;i++)
        pre[i]=max(pre[i-1],height[i]);
        
        post[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        post[i]=max(post[i+1],height[i]);
        
        long long int sum=0;
        for(int i=0;i<n;i++)
        sum+=(min(pre[i],post[i])-height[i]);
        
        return sum;
    }
};

// second approach

class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n = height.size(); 
        int l=0; 
        int r=n-1;
        int ans=0;
        int maxl=0;
        int maxr=0;
        
        while(l<=r)
        {
            
            if(height[l]<=height[r])
            {

                if(height[l]>=maxl) 
                maxl=height[l];
                else 
                ans+=maxl-height[l];
                
                l++;
            }
            else
            {

                if(height[r]>=maxr) 
                maxr= height[r];
                else 
                ans+=maxr-height[r];
                
                r--;
            }
        }
        return ans;
    }
};
