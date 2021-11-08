void SortedStack :: sort()
{
   //Your code here
   stack<int>st;
   priority_queue<int>q;
   
   while(!s.empty())
   {
      q.push(s.top());
      s.pop();
   }
   while(!q.empty())
   {
      st.push(q.top());
      q.pop();
   }
  
  while(!st.empty())
  {
     
      s.push(st.top());
      st.pop();
  }
}
