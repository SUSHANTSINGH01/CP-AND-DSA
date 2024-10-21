class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // Complete the function
        
        long long int x=0;
        
        for(int ele:arr){
            x^=ele;
        }
        
        if(x!=0)
        return 0;
        
        long long int res=(pow(2,arr.size()-1)-1);
        return res%(1000000007);
    }
};
