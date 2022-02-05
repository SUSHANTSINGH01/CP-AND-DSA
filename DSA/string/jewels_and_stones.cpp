class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int n=jewels.size();
        int n1=stones.size();
        int arr[100]={0};
        int arr1[100]={0};
        int sum=0;
        for(int i=0;i<n;i++)
        arr[jewels[i]-'A']++;
        
        for(int i=0;i<n1;i++)
        arr1[stones[i]-'A']++;
        
        for(int i=0;i<100;i++)
        {
            if(arr[i]>=1)
            sum+=arr1[i];
        }
        
        return sum;
    }
};
