
struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        multimap<double,pair<int,int>>mp;
        
        for(int i=0;i<n;i++)
        {
            double temp=(double)arr[i].value/(double)arr[i].weight;
            int a=arr[i].value;
            int b=arr[i].weight;
            
             mp.insert({temp,{a,b}});
        }
        double ans=0;
        double curr=0;
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
             double a=it->second.first;
            double b=it->second.second;
            
            if(curr+b<=W)
            {
                 curr+=b;
                ans+=a;
               
            }
            else
            {
               double tm=(W-curr);
                ans+=a*(tm/(double)b);
                break;
            }
        }
        return ans;
        
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
} 
