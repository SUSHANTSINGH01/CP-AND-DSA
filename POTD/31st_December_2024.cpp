class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int res=0;
        int temp_max=0;
        int maxx=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            maxx=max(arr[i],maxx);
        }
        bool arr2[maxx+1]={0};
        for(int i=0;i<n;i++){
            arr2[arr[i]]=1;
        }
        for(int i=0;i<=maxx;i++)
        {
            temp_max+=arr2[i];
            if(arr2[i]==0)
            temp_max =0;
            res=max(temp_max,res);
        }
        return res;
    }
};
