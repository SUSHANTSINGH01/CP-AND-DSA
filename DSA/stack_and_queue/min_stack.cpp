stack<int> st1;
stack<int> st2;
MinStack::MinStack() 
{
    while(st1.size()>0)
    {
        st1.pop();
        st2.pop();
    }
}

void MinStack::push(int x) 
{
    st1.push(x);
    int val = x;
    if(st2.size()>0 && st2.top()<x)
    val=st2.top();
    
    st2.push(val);
}

void MinStack::pop() 
{
    if(st1.size()>0)
    {
        st1.pop();
        st2.pop();
    }
}

int MinStack::top() 
{
    if(st1.size()>0)
    return st1.top();
    
    return -1;
}

int MinStack::getMin() 
{
    if(st1.size()>0)
    return st2.top();
    
    return -1;
}
