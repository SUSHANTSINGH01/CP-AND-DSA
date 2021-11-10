class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) 
    {
        // your code here
        vector<int>ans;
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                ans.push_back(b[j]);
                j++;
            }
            else
            {
                ans.push_back(a[i]);
                i++;
            }
        }
        while(i<n)
        {
            ans.push_back(a[i]);
            i++;
        }
        while(j<m)
        {
            ans.push_back(b[j]);
            j++;
        }
        return ans;
    }
};
