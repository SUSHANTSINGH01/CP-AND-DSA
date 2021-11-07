void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n)
{
	// Your code goes here
	return s.size()==n;
	
}

bool isEmpty(stack<int>& s)
{
	// Your code goes here
	return s.empty();
	
}

int pop(stack<int>& s)
{
	// Your code goes here
	if(!s.empty())
	{
	    int k=s.top();
	    s.pop();
	    return k;
	}
	    return -1;
}

int getMin(stack<int>& s)
{
	// Your code goes here
	int top=s.top();
	int mini=s.top();
	if(s.size()>1)
	{
	    s.pop();
	    mini=min(mini, getMin(s));
	}
	s.push(top);
	return mini;
}
