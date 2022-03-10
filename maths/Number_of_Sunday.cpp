int Solution::solve(string A, int B) 
{
    unordered_map<string,int>mp;
    mp["Monday"]=1;
    mp["Tuesday"]=2;
    mp["Wednesday"]=3;
    mp["Thursday"]=4;
    mp["Friday"]=5;
    mp["Saturday"]=6;
    mp["Sunday"]=7;
    
    unordered_map<int,string>mp1;
    mp1[1]="Monday";
    mp1[2]="Tuesday";
    mp1[3]="Wednesday";
    mp1[4]="Thursday";
    mp1[5]="Friday";
    mp1[6]="Saturday";
    mp1[7]="Sunday";
    
    B-=mp["Sunday"]-mp[A];
    B-=1;
    int res=B/7;
    if(B>=0)
    res++;

    return res;


}
