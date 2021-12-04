class Solution {
public:
   
    int rotatedDigits(int n) 
    {
        int ans=0;
       for(int i=1;i<=n;i++)
       {
           
           int j=i;
           bool ch=false;
               
           while(j)
           {
               if(j%10==2 || j%10==5 || j%10==6 ||j%10==9)
               ch=1;
               else if(j%10==3 || j%10==7 || j%10==4)
               {
                   ch=0;
                   break;
               }
               j/=10;
           }
           if(ch)
           ans++;
           
       }
        return ans;
    }
};
