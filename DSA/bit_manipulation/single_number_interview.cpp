int Solution::singleNumber(const vector<int> &A) 
{
        int res=0;
        for(int i=0;i<=31;i++) 
        {
            int ch=1<<i;
            
            int count=0;
            for(auto child : A) 
            {
               
                    if(child & ch)
                    count += 1;
            }
            if(count%2==1) 
            res=res|ch;
        
        }

        return res;
}
