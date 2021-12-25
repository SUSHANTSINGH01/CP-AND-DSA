class MyStack {
public:
    queue<int>q;
    queue<int>q1;
    MyStack() 
    {
       
        
    }
    
    void push(int x) 
    {
        q.push(x);
        while(!q1.empty())
        {
            q.push(q1.front());
            q1.pop();
        }
        swap(q1,q);
    }
    
    int pop()
    {
        int res;
        if(q1.empty())
        res=-1;
        else 
        {
            res=q1.front();
            q1.pop(); 
        }
        return res;
    }
    
    int top()
    {
        int res;
        if(q1.empty())
        res=-1;
        else 
        res=q1.front();
             
        return res;
    }
    
    bool empty() 
    {
       return q1.empty();
    }
    
};

