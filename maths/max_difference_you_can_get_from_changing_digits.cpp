class Solution {
public:
    int maxDiff(int num) 
    {
        int c=0;
        string str=to_string(num);
        int n=str.size();
        int minn=9;
        int maxx=1;
        int sum=0;
        int pos=0;
        for(int i=0;i<n;i++)
        {
            if(minn>(int(str[i])-48))
            {
                minn=int(str[i])-48;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(maxx<(int(str[i])-48))
            {
                maxx=int(str[i])-48;
                pos=i;
                break;
            }
        }
        string str1="";
        for(int i=0;i<n;i++)
        {
            if(minn==(int(str[i])-48))
            str1+='9';
            
            else
            str1+=str[i];
        }
        
        string str2="";
        for(int i=0;i<n;i++)
        {
            if(maxx==(int(str[i])-48))
            {
                if(pos==0)
                str2+='1';
                else
                str2+='0';
            }
            
            else
            str2+=str[i];
        }
        cout<<str1<<" "<<str2;
        sum=stoi(str1)-stoi(str2);
        
        return sum;
    }
};
