vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) 
{
    int n=A.size();
    priority_queue<pair<int, pair<int, int>>>pq;
	set<pair<int, int>>st;
	vector<int>ans;

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	pq.push({A[n-1]+B[n-1], {n-1, n-1}});
	st.insert({n-1, n-1});

    int temp=C;
	while(temp--){
		pair<int, pair<int,int>>top = pq.top();
		pq.pop();
		ans.push_back(top.first);
		int left=top.second.first;
		int right=top.second.second;
		
		if(right>0 && left>=0  && st.find({left,right-1})==st.end() )
        {
			pq.push({A[left]+B[right-1],{left,right-1}});
			st.insert({left,right-1});
		}
		if(right>=0  && left>0 && st.find({left-1, right})==st.end())
        {
			pq.push({A[left-1]+B[right],{left-1,right}});
			st.insert({left-1, right});
		}
	}
	return ans;
}
