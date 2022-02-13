class Solution {
public:
    int dayOfYear(string date) {
        
        
        string month,day,year;
        year=date.substr(0,4);
        month=date.substr(5,2);
        day=date.substr(8,2);
        
        int m,d,y,sum=0;
        
        y=stoi(year);
        
        int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        
        if(month[0]=='0')
        m=month[1]-'0';
        
        else
        m=stoi(month);
        
        if(day[0]=='0')
        d=day[1]-'0';
          
        else
        d=stoi(day);
        
        for(int i=0;i<m-1;i++)
        sum+=arr[i];
        sum+=d;
        
        if(y%400==0||(y%4==0 && y%100!=0))
        if(m>2)
        sum++;    
        
        return sum;
    }
};
