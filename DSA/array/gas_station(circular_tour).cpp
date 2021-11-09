class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int total=0;
        int cur=0;
        int st=0;
        int n=gas.size();
        for(int i=0;i<n;i++)
        {
            total+=gas[i]-cost[i];
            cur+=gas[i]-cost[i];
            if(cur<0)
            {
                cur=0;
                st=i+1;
            }
        }
        return (total<0)?-1:st;  
    }
};


// gfg 

class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int currsum=0;
       int totalsum=0;
       int pos=-1;
       for(int i=0;i<n;i++)
       {
           currsum=currsum+p[i].petrol-p[i].distance;
           totalsum=totalsum+p[i].petrol-p[i].distance;
           if(currsum<0)
           {
               currsum=0;
               pos=i;
           }
       }
       if(totalsum<0)
       return -1;
       else
       return (pos+1)%n;
    }
};

