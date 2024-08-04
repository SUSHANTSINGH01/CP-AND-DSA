class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int,int>>vp(n);
        
        for(int i=0;i<n;i++)
        vp[i]={end[i],start[i]};
        
        sort(vp.begin(),vp.end());
        
        int res=0;
        int maxx=-1;
        for(int i=0;i<n;i++)
        {
          int sec=vp[i].second;
          int fir=vp[i].first;
           if(sec>maxx)
           {
               res++;
               maxx=fir;
           }
        }
        return res;   
    }
};
