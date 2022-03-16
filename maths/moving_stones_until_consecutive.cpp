class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        
         int res1=0;
         int res2=0;
         vector<int>vec= {a,b,c} ;
    
         sort(vec.begin(),vec.end());
    
         if(vec[1]-vec[0]==1 && vec[2]-vec[1]==1)
         res1=0;
         else if(vec[1]-vec[0]==1 || vec[2]-vec[1]==1 || vec[1]-vec[0]==2 || vec[2]-vec[1]==2)
         res1=1;
         else
         res1=2;
    
         res2=(vec[2]-vec[1])+(vec[1]-vec[0])-2;
         return {res1,res2};        
    
    }
};
