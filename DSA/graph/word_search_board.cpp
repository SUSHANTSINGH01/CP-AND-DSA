
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
void solve(int i,int x,int y,bool &res,string &str,int n,int m,vector<string>&vec)
{
	if(res)
    return;
	if(i==str.size())
    {
		res=true;
		return;
	}
	for(int j=0;j<4;j++)
    {
		if((x+dx[j]<n && x+dx[j]>=0) && (y+dy[j]<m && y+dy[j]>=0) && (vec[x+dx[j]][y+dy[j]]==str[i]))
        solve(i+1,x+dx[j],y+dy[j],res,str,n,m,vec);
	}
}

int Solution::exist(vector<string> &A, string B) 
{
    bool res=false;
    vector<string>vec=A;
    string str=B;
    int n=A.size();
    int m=A[0].size();
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    if(A[i][j]==str[0])
    solve(1,i,j,res,str,n,m,vec);
		
    return res;
}
