class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) 
    {
        int arr[100] = {};
        int arr1[100] = {};
        int ans=0;
	    for(auto it:seats) 
        arr[it-1]++;
	    for(auto it:students) 
        arr1[it-1]++;
	    for(int i=0,j=0;i<100;)
        {
            if(!arr[i])
            i++;
            else if(!arr1[j]) 
            j++;
            else 
            {
                int dif= min(arr[i], arr1[j]);
                ans+=dif * abs(i-j);
                arr[i]-=dif;
                arr1[j]-=dif;
            }
        }
	    return ans;
    }
};
