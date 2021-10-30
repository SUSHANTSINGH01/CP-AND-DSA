#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
 Node *odd_start=0;
 Node *odd_end=0;
 Node *even_start=0;
 Node *even_end=0;
 for(Node *it=head;it!=0;it=it->next) 
 {
      if(it->data%2==0)
      {
           if(even_start==0) 
           {
            even_start=it;
            even_end=even_start;
           }
           else 
           {
            even_end->next=it;
            even_end=even_end->next;
           }
      }
      else 
      {
           if(odd_start==0) 
           {
            odd_start=it;
            odd_end=odd_start;
           }
           else 
           {
            odd_end->next=it;
            odd_end=odd_end->next;
           }
      }
    }
         if(even_start==0 || odd_start==0) 
         return head;
         
         even_end->next=odd_start;
         odd_end->next=0;
         return even_start;
       }

};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
