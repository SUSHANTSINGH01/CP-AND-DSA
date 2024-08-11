class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    
    static bool comp(Job j1, Job j2)
    {
      return (j1.profit>j2.profit);
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<int>res;
        sort(arr,arr+n,comp);
        int maxx_dead=arr[0].dead;
        
        for(int i=1;i<n;i++)
        maxx_dead=max(maxx_dead,arr[i].dead);
        
        bool is_dead[maxx_dead+1];
        
        for(int i=0;i<=maxx_dead;i++)
        is_dead[i]=false;
        
        int c=0;
        int sum=0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=arr[i].dead; j>0; j--)
            {
                if(!is_dead[j])
                {
                    is_dead[j]=true;
                    c++;
                    sum+=arr[i].profit;
                    break;
                }
            }
            if(c==maxx_dead)
            break;
        }
        
        return {c,sum};
    } 
};


// Java Code


class Solution
{
    //Function to find the maximum profit and the number of jobs done.
    static class JobComparator implements Comparator<Job> {
        @Override
        public int compare(Job j1, Job j2) {
            return Integer.compare(j2.profit, j1.profit);
        }
    }
    
    int[] JobScheduling(Job arr[], int n)
    {
        // Your code here
        Arrays.sort(arr, new JobComparator());

        int maxDeadline=arr[0].deadline;
        
        for(int i=1;i<n;i++) 
        maxDeadline=Math.max(maxDeadline,arr[i].deadline);
        
        boolean[] isDead = new boolean[maxDeadline+1];

        int count=0;  
        int totalProfit=0; 

        for(int i=0;i<n;i++){
            for(int j=arr[i].deadline;j>0;j--){
                if(!isDead[j]) {
                    isDead[j] = true;
                    count++;
                    totalProfit+=arr[i].profit;
                    break;
                }
            }
            if(count==maxDeadline) 
            break;
        }

        return new int[]{count, totalProfit};
    }
}
