class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) 
    {
        sort(pairs.begin(),pairs.end(),[] (const auto &pa,const auto &pb)
             {
                 return pa[1]>pb[1];
                 
             });
           
        int a=pairs[0][0];
        int b=pairs[0][1];
         int c=1;  
        int maxx=1;
            for(int i=1;i<pairs.size();i++)
            {
               if(a<=pairs[i][1])
               {
                   
                   a=max(a,pairs[i][0]);
                   b=max(pairs[i][1],b);
                   cout<<a<<" "<<b<<endl;
               }
                else
                {
                    c++;
                   a=pairs[i][0];
                   b=pairs[i][1];
                }
                
                maxx=max(maxx,c);
            }
        
        return maxx;
    }
};
