class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n =nums.size();
        int arr[10000]={0};
             vector<int> ans;
             for(int i=0;i<n;i++)
             arr[nums[i]-1]++;

            
             for(int i=0;i<n;i++)
                 if(arr[i]==2)
                 {
                     ans.push_back(i+1);
                     break;
                  }
             
              for(int i=0;i<n;i++)
                  if(arr[i]==0){
                      ans.push_back(i+1);
                      break;
                  }
             return ans;
         }
    
};
