#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/     bool comparator(Job j1, Job j2)
        {
             return (j1.profit>j2.profit);
        }

class Solution 
{
    public:
        
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<int>ans;
        sort(arr, arr+n, comparator);
        
        int maxx = arr[0].dead;
        for(int i=1; i<n; i++)
        maxx = max(maxx, arr[i].dead);
        
        int arr1[maxx+1];
        for(int i=0; i<=maxx; i++) 
        arr1[i] = -1;
        int c=0;
        int sum=0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=arr[i].dead; j>0; j--)
            {
                if(arr1[j]==-1)
                {
                    arr1[j]=i;
                    c++;
                    sum += arr[i].profit;
                    break;
                }
            }
        }
        
        ans.push_back(c);
        ans.push_back(sum);
        
        return ans;
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}
