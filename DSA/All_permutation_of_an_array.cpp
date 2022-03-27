      
    void swap(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    
    void permutation(vector<int> &nums,int i,int n,vector<vector<int>>&v){
        if(i==n){
            v.push_back(nums);
            return ;
        }

        for(int j=i;j<=n;j++)
        {
            swap( nums[i],nums[j]);
            permutation(nums,i+1,n,v);
            swap( nums[i],nums[j]);
        }
    }


vector<vector<int> > Solution::permute(vector<int> &A) 
{
     vector<vector<int>>vec;
     int n=A.size();
     permutation(A,0,n-1,vec);
     return vec;
}
