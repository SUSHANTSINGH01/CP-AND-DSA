class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>0)
            mp[arr[i]]++;
            
        }
        int n=mp.size();
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)==mp.end())
            return i;
        }
        return n+1;
    }
};
