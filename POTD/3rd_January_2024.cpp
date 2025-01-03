class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        
        int c=0; 
        int currXor=0;
        unordered_map<int,int>mp; 
        for(int num:arr){
            currXor^=num;
            if(currXor==k)
            c++;
            int tempXor=currXor^k;
            if(mp.find(tempXor)!=mp.end())
            c+=mp[tempXor];
            mp[currXor]++;
        }
        return c;
    }
};
