class Solution{


	public:
	long long getCount(int N)
	{
		// Your code goes here
		long long dp[10];
		for(int i=0;i<10;i++)
		dp[i]=1;
		
		map<int,vector<int>>mp;
		mp[0]={0,8};
		mp[1]={1,2,4};
		mp[2]={2,1,3,5};
		mp[3]={3,2,6};
		mp[4]={1,7,5,4};
		mp[5]={5,6,4,8,2};
		mp[6]={6,9,5,3};
		mp[7]={7,4,8};
		mp[8]={8,0,9,7,5};
		mp[9]={9,6,8};
		
		long long int ans=10;
		for(int i=2;i<=N;i++)
		{
		    long long int temp[10];
		    ans=0;
		    for(int j=0;j<=9;j++)
		    {
		        long long int x=0;
		        for(auto it:mp[j])
		        x+=dp[it];
		        temp[j]=x;
		    }
		    for(int k=0;k<=9;k++)
		    {
		        ans+=temp[k];
		        dp[k]=temp[k];
		    }
		}
		return ans;
	}


};
