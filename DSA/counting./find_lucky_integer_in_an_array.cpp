class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int arr1[505]={0};
        for(int i=0;i<arr.size();i++)
        arr1[arr[i]]++;
        
        int c=-1;
        for(int i=1;i<505;i++)
        if(arr1[i]==i)
            c=i;
        
        return c;
    }
};
