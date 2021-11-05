class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
       
        sort(candies,candies+N);
        int n1=N/(K+1);
        if(N%(K+1)!=0)
        n1++;
        
        int minn=0;
        int maxx=0;
        for(int i=0;i<n1;i++)
        {
            minn+=candies[i];
            maxx+=candies[N-i-1];
        }
        return {minn,maxx};
    }
};
