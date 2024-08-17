class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    using ulli = long long int;
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        int n=nums.size();
        int c=0;
        ulli prod=1;
        vector<ulli>res;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            c++;
            else
            prod*=nums[i];
            
        }
        
        for(int i=0;i<n;i++){
            if(c>=2)
            res.push_back(0);
            else{
                if(c==1){
                    if(nums[i]!=0)
                    res.push_back(0);
                    else
                    res.push_back(prod);
                }else
                res.push_back(prod/nums[i]);
                
            }
        }
        return res;
    }
};


// Java code


class Solution {
    public static long[] productExceptSelf(int nums[]) {
        // code here
        int n=nums.length;
        int c=0;
        long prod=1;
        long[] res = new long[n];
        
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            c++;
            else
            prod*=nums[i];
            
        }
        
        for(int i=0;i<n;i++){
            if(c>=2)
            res[i]=0;
            else{
                if(c==1){
                    if(nums[i]!=0)
                    res[i]=0;
                    else
                    res[i]=prod;
                }else
                res[i]=prod/nums[i];
                
            }
        }
        return res;
    }
}
