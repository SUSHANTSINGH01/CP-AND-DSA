class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int ans = 0;
        int max_sum = INT_MIN;
        
        for(int i = 0; i < S.length(); i++) 
        {
            int x = (S[i] == '0') ? 1 : -1;
            ans += x;
            max_sum = max(max_sum , ans);
            if(ans < 0) 
            ans = 0;
        }
        
        return max_sum;
    }
	
};
