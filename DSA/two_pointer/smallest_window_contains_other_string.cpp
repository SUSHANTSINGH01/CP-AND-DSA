string Solution::minWindow(string A, string B) {
        
        int n=A.size();
        int m=B.size();
        if(m>n)
        return "";
       
        unordered_map<char,int> mp;
        for(char &ch:B) 
        mp[ch]++;
       
       int c=mp.size();
       
       int i=0;
       int j=0;
       
       int start_Idx=-1;
       int wind_Length=INT_MAX;
       
       while(j<n)
       {
           if(mp.find(A[j])!=mp.end())
           {
               mp[A[j]]--;
               if(mp[A[j]]==0) 
               c--;
           }
           
           if(c==0)
           {
               while(c==0)
               {
                   if(mp.find(A[i]) != mp.end())
                   {
                       mp[A[i]]++;
                       
                       if(mp[A[i]]==1) 
                       c++;
                   }
                   i++;
               }
               
               if(wind_Length > j-i+2)
               {
                   wind_Length=j-i+2;
                   start_Idx=i-1;
               }
           }
           j++;
       }
       
       if(wind_Length==INT_MAX)
       return "";
       else
       return A.substr(start_Idx, wind_Length);
}
