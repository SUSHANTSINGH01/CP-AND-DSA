class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int f=0;
        int n=arr.size();
        if(n<=2)
        return 0;
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1] && f==0)
            f++;
            if(f==0)
            {
                if(arr[i]>=arr[i+1])
                return 0;
                c++;
            }
            else if(f==1)
            {
                if(arr[i+1]>=arr[i])
                return 0;
            }
        }
        if(f==0 || c==0)
        return 0;
        return 1;
        
    }
};
