class Solution {
    public : 
        int md=1e9+7;
        long long int findMaxProduct(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long long int res=0;
        int n=arr.size();
        if(n==1) 
        return arr[0];
        int i=n-1;
        for(;i>=0;i--){
            if(arr[i]<0) 
            break;
            if(arr[i]==0) 
            continue;
            if(res==0) 
            res+=arr[i];
            else 
            res=(res*arr[i])%md;
        }
        if((i+1)%2!=0) 
        i--;
        while(i>=0){
            if(res==0) 
            res+=abs(arr[i]);
            else 
            res=(res*abs(arr[i]))%md;
            i--;
        }
        return res;
    }
};
