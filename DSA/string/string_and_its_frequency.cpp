class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) 
    {
        unordered_map<int,int>mp;
        vector<vector<int>>vec;
        
        for(int i=0;i<values.size();i++) 
        vec.push_back({values[i],labels[i]});
        
        sort(vec.begin(),vec.end());
        int sum=0;
        int n=vec.size();
        
        for(int i=n-1;i>=0;i--)
        {
            if(numWanted>0)
            {
                if(mp.find(vec[i][1])!=mp.end())
                {
                    if(useLimit>mp[vec[i][1]])
                    {
                        sum+=vec[i][0];
                        numWanted--;
                        mp[vec[i][1]]++;
                    }
                }
                else
                {
                    sum+=vec[i][0];
                    numWanted--;
                    mp[vec[i][1]]=1;
                }
            }
            else
            break;
        }
        return sum;    
    }
};
