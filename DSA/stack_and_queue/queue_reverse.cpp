// using stack

queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int>st;
    while(q.empty()==false)
    {
        st.push(q.front());
        q.pop();
    }
    while(st.empty()==false)
    {
        q.push(st.top());
        st.pop();
    }
    return q;
}

// using recursion

void solve(queue<int> &q)
{
    if(q.empty())
    return;
    int val=q.front();
    q.pop();
    solve(q);
    q.push(val);
}
queue<int> rev(queue<int> q)
{
    // add code here.
    solve(q);
    return q;
}
