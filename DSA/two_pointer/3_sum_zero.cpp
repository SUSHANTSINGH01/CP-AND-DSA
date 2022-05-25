class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) 
    {
     
        int n=A.size();
        sort(A.begin(), A.end());

        if(n<3)
        return {};

        int minn=INT_MAX;
        int B=0;
        int val1=0;
        int val2=0;
        int val3=0;
        vector<vector<int>>res;

        for(int i=0;i<n-2;i++)
        {
            if(i!=0 && A[i]==A[i-1])
            continue;
            
            int l=i+1;
            int r=n-1;
            
            
            while(l<r)
            {
                int temp=A[i]+A[l]+A[r];
                int diff=abs(temp-B);

                if(diff==0)
                {
                    val1=A[i];
                    val2=A[l];
                    val3=A[r];
                    while(val2==A[l] && l<n-1)
                    l++;
                    while(val3==A[r] && r>0)
                    r--;
                    
                    res.push_back({val1,val2,val3});
                }


                else if(B>temp)
                l++;

                else
                r--;

            }
        }
        return res;
        }
};
