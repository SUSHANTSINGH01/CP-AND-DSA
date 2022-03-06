int Solution::lengthOfLongestSubstring(string A) 
{
       int i=0;
       int j=0;
       int maxx = 0;
	   unordered_map<int,int> mp;
       int n=A.size();
        while(j<n)
        {
            mp[A[j]]++; 
            if(mp.size()<j-i+1) 
            {
                while(mp.size() < j-i+1)
                {
                    mp[A[i]]--;
                    if(mp[A[i]] == 0) 
                    mp.erase(A[i]);
                    i++;
                }
                j++;
             }

	        else if(mp.size() == j-i+1)
            {
                maxx = max(maxx, j-i+1);
                j++;
		    }
	    }
	return maxx;
}
