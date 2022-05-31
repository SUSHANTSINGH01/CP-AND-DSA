bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{
    int n=arrive.size();
    int m=depart.size();

    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int i=0;
    int j=0;
    int c=0;

    while(i<n && j<m)
    {
        if(arrive[i]<=depart[j])
        { 
            c++;
            i++;
        }
        else
        { 
            c--;
            j++;
        }
        if(c>K)
        return 0;
    }
    return 1;
}
