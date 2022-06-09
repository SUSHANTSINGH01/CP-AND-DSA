int Solution::solve(string A, string B, vector<string> &C) {
        unordered_set<string>st;
        bool flag=0; 
        
        for(auto word:C)
        {
            if(B.compare(word)==0)
            flag=1;
            st.insert(word);    
        }
        
        if(flag==0)    
        return 0;
        
        queue<string>q;
        q.push(A);
        int res=0;
        
        while(!q.empty())
        {
            int n=q.size(); 
            res+=1;  
            while(n--)
            {
                string curr=q.front();
                q.pop();
               
                for(int i=0;i<curr.length();++i)  
                {
                    string temp=curr;
                    for(char ch='a';ch<='z';ch++) 
                    {
                        temp[i]=ch;
                        
                        if(curr==temp)
                        continue;  
                        
                        if(temp.compare(B)==0)
                        return res+1; 
                        
                        if(st.find(temp)!=st.end())
                        {
                            q.push(temp);
                            st.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
}
