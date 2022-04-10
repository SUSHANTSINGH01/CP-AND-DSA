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
