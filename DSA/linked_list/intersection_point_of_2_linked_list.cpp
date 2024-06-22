// leetcode

// Optimized approach

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
           
            ListNode *temp1 = headA;
            ListNode *temp2 = headB;
            while(temp1 != temp2)
            {
    
                temp1 = (temp1 == NULL ? headB : temp1->next);
                temp2 = (temp2 == NULL ? headA : temp2->next);
                   
            } 
            return !temp1 ? NULL : temp1;
    }

// Brute force

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int s1=0;
        int s2=0;
        ListNode *a=headA;
        ListNode *b=headB;
        ListNode *res;
        while(headA)
        {
            headA=headA->next;
            s1++;
        }
        while(headB)
        {
            headB=headB->next;
            s2++;
        }
        while(s1!=s2)
        {
            if(s1>s2)
            {
              a=a->next;
              s1--;
            }
            else if(s2>s1)
            {
               b=b->next;
                s2--;
            }
            else if(s1==s2)
            break;
        }
        
        int f=0;
        while(b && a)
        {
            
            if(b==a)
            {
                if(f==0)
                {
                    res=b;
                    f=1;
                }
                b=b->next;
                a=a->next;
            }
            else if(b->val!=a->val)
            {
                f=0;
                b=b->next;
                a=a->next;
            }
            else
            {
                 b=b->next;
                 a=a->next;
            }
                
        }
        if(f==1)
        return res;
        return 0;
        
    }
};

// gfg

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
