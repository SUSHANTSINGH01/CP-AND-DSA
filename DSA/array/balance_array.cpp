class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>oddsum(n,0);
        vector<int>evensum(n,0);
        int res=0;
        evensum[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            if(i%2==1)
            {
                oddsum[i]+=oddsum[i-1]+nums[i];
                evensum[i]=evensum[i-1];
            }
            else
            {
                oddsum[i]=oddsum[i-1];
                evensum[i]+=evensum[i-1]+nums[i];
            }
        }
        
//         for(int i=0;i<n;i++)
//         cout<<evensum[i]<<" "<<oddsum[i]<<endl;
       
        for(int i=0;i<n;i++)
        {
            int odd_value=0;
            int even_value=0;
            
            if(i>=1)
            {
                odd_value=oddsum[i-1];
                even_value=evensum[i-1];
            }
            
            odd_value+=(evensum[n-1]-evensum[i]);
            even_value+=(oddsum[n-1]-oddsum[i]);
            
            //cout<<even_value<<" "<<odd_value<<endl;
            
            if(odd_value==even_value)
            res+=1;
        }
        return res;
    }
};
