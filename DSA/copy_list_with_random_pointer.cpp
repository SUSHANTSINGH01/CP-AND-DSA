// Optimized Solution

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp;
        Node *curr=head;
        Node *new_node=new Node(0);
        Node *start_head=new_node;
        while(curr!=0)
        {
            Node *temp=new Node(curr->val);
            new_node->next=temp;
            new_node=new_node->next;
            
            mp[curr]=new_node;
            curr=curr->next;
        }
        curr=head;
        new_node=start_head->next;
        while(new_node!=0) 
        {
            new_node->random=NULL;
            if(curr->random != NULL){
                new_node->random=mp[curr->random];
            }
            new_node=new_node->next;
            curr=curr->next;
        }
        return start_head->next;
    }
};


// Brute Force



/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) 
{
        if(A==0)
        return 0;
    
        RandomListNode* head=A;
    
        while(A)
        {
            RandomListNode* copyA=new RandomListNode(A->label);
            copyA->next=A->next;
            A->next=copyA;
            A=copyA->next;
        }
        A=head;
        
        while(A)
        {
            if (A->random==0)             
            A->next->random=0;
            else
            A->next->random=A->random->next;
                
            A=A->next->next;
        }
        A=head;
        
        RandomListNode* copy=A->next;
        RandomListNode* copyHead=A->next;
        
        while(A)
        {
            A->next=A->next->next;
            A=A->next;
            if(copy->next==0)            
            break;
            copy->next=copy->next->next;
            copy=copy->next;
        }
        
        return copyHead;
}
