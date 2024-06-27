// Optimized Solution

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   priority_queue<int, vector<int>, greater<int>>pq;
   
   while(!s.empty()){
       pq.push(s.top());
       s.pop();
   }
   
   while(!pq.empty()){
       s.push(pq.top());
       pq.pop();
   }
}


// Second SOlution


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
