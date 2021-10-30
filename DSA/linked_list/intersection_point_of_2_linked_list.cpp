#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    
    if (head1==0 || head2==0)    
    return -1;
    
    Node *p1=head1;
    Node *p2=head2;
    int c1=0;
    int c2=0;
    int diff=0;
    
   
    while(p1 || p2)
    {
        if(p1)
        {
            c1++;
            p1=p1->next;
        }
        
        if(p2)
        {
            c2++;
            p2=p2->next;
        }
        
    }
    
    diff=abs(c1-c2);
    p1=head1;
    p2=head2;
  
    if(c1>c2)
    {
        while(diff!=0)
        {
            p1=p1->next;
            diff--;
        }
    }
    
    if(c1<c2)
    {
        while(diff!=0)
        {
            p2=p2->next;
            diff--;
        }
    }
    
    
    while(p1 && p2)
    {
        if(p1==p2)  
        return p1->data;
        
        p1=p1->next;
        p2=p2->next;
    }
    
    return -1;

}
