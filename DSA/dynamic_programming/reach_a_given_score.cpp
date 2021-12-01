long long int count(long long int n)
{
	long long int table[n+1],i;
	memset(table, 0, sizeof(table));
	table[0]=1;                 // If 0 sum is required number of ways is 1.
	
	// Your code here
	vector<int>ans;
	ans.push_back(3);
	ans.push_back(5);
	ans.push_back(10);
	for(auto i:ans)
	for(int j=1;j<=n;j++)
	if(i<=j)
	table[j]+=table[j-i];
	
	return table[n];
}
