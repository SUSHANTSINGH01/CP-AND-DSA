#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node *find_mid(Node *head) 
    {
        
        if(head==0 || head->next==0) 
        return head;
        
        Node *f_ptr=head;
        Node *s_ptr=head;
        
        while(f_ptr && f_ptr->next) 
        {
            f_ptr=f_ptr->next->next;
            if(f_ptr)
            s_ptr=s_ptr->next;
        }
        
        return s_ptr;
    }
    
    Node *merge(Node *head1, Node *head2) 
    {
        
        if(head1==0 && head2) 
        return head2;
        if(head1 && head2==0) 
        return head1;
        
        if(head1==0 && head2==0) 
        return head2;
        
        
        Node *p1=head1;
        Node *p2=head2;
        Node *temp_head=0;
        Node *curr=0;
        
        while(p1 && p2) 
        {
            
            if(p1->data <= p2->data) 
            {
                if(temp_head==0) 
                {
                   temp_head=p1;
                   curr=p1;
                }
                else 
                {
                    curr->next=p1;
                    curr=curr->next;
                }
                p1=p1->next;
            }
            
            else 
            {
                if(temp_head==0)
                {
                    temp_head=p2;
                    curr=p2;
                }
                else 
                {
                    curr->next=p2;
                    curr=curr->next;
                }
                p2=p2->next;     
            }
        }
        
        while(p1) 
        {
            curr->next=p1;
            curr=curr->next;
            p1=p1->next;
        }
        
        while(p2) 
        {
            curr->next=p2;
            curr=curr->next;
            p2=p2->next;
        }
        
        if(p1==0 && p2==0) 
        curr->next=0;
        
        return temp_head;
    }
    
    Node* mergeSort(Node* head) 
    {
        // your code here
        if(head && head->next==0) 
        return head;
        
        if(head and head->next) 
        {
            Node *mid=find_mid(head);
            Node *head1=(mid!=0)?(mid->next):0;
            mid->next=0;
            head= mergeSort(head);
            head1=mergeSort(head1);
            return merge(head,head1);
        }
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
} 
