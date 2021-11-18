vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
//Your code here
    unordered_set<string>st;
    vector<vector<int>>ans;
    string temp;
    for(int i=0;i<row;i++)
    {
        temp="";
        vector<int>arr;
        for(int j=0;j<col;j++)
        {
            temp+=to_string(M[i][j]);
            arr.push_back(M[i][j]);
        }
        if(st.find(temp)!=st.end())
        continue;
        ans.push_back(arr);
        st.insert(temp);
    }
    return ans;
}
