class Solution {
public:
    int longestPalindrome(string s) 
    {
        int n=s.size();
      
        int arr[100]={0};
        for(int i=0;i<n;i++)
        arr[s[i]-'A']++;
        
        int c=0;
        int sum=0;
        for(int i=0;i<100;i++)
        {
            if(arr[i]%2==0)
            sum+=arr[i];
            else if(arr[i]>=1 && arr[i]%2==1)
            {
                sum+=(arr[i]-1);
                c++;
            }
        }
        if(c)
        sum++;
        
        return sum;
    }
};
