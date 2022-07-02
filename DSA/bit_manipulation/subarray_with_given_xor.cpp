int Solution::solve(vector<int> &A, int B) {
    
   unordered_map<long long int,long long int>mp;
   
   long long int res=0;
   long long int temp=0;
   
   for(int i=0;i<A.size();i++)
   {
       temp=temp^A[i];
       
       if(temp==B)
       res++;
       
       if(mp.count(temp^B)==1)
       res+=mp[temp^B];
       
       mp[temp]+=1;
   }
   
   return res;
}
