class Solution {
public:
    vector<int> getNoZeroIntegers(int n) 
    {
        int a=1;
        int b=n-1;
        int temp;
        int temp1;
        while(true)
        {
            temp=a;
            temp1=b;
            while(temp>0)
            {
                if(temp%10==0)
                {
                    a++;
                    b--;
                    break;
                }
                temp/=10;
            }  
            while(temp1>0)
            {
                if(temp1%10==0)
                {
                    a++;
                    b--;
                    break;
                }
                temp1/=10;
            }
            if(temp==0 && temp1==0)
            break;
            
        }
        return {a,b};
    }
};
