// Optimized Solution

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        ListNode *first_half = new ListNode(0);
        ListNode *res = first_half;
        ListNode *second_half = new ListNode(0);
        ListNode *res_second = second_half;

        while(head){
            if(head->val<x){
                first_half->next=new ListNode(head->val);
                first_half=first_half->next;
            }else{
                second_half->next=new ListNode(head->val);
                second_half=second_half->next;
            }
            head=head->next;
        }
        if(res_second->next!=NULL)
        first_half->next=res_second->next;
        return res->next;
        
    }
};

// Second Solution


class Solution {
public:
    ListNode* partition(ListNode* head, int x) 
    {
        vector<int>vec;
    
        ListNode *temp=head;

        while(temp)
        {
            vec.push_back(temp->val);
            temp=temp->next;
        }

        ListNode *root=new ListNode(0);
        int n=vec.size();
        ListNode *start=root;
        for(int i=0;i<n;i++)
        {
            if(vec[i]<x)
            {
                ListNode *add=new ListNode(vec[i]);
                root->next=add;
                root=root->next;
            }

        }
         for(int i=0;i<n;i++)
        {
            if(vec[i]>=x)
            {
                ListNode *add=new ListNode(vec[i]);
                root->next=add;
                root=root->next;
            }

        }
        return start->next;
    }
};


// Third Solution


class Solution {
public:
    ListNode* partition(ListNode* head, int x) 
    {
        if(!head || !head->next)
        return head;
        
        ListNode *head1= 0;
        ListNode *tail1= 0;
        ListNode *head2= 0; 
        ListNode *tail2= 0;
        
        ListNode *curr=head;
        while(curr)
        {
            if(curr->val<x)
            {
                if(!head1)
                {
                    head1=curr;
                    tail1=curr;
                }
                else
                {
                    tail1->next=curr;
                    tail1=tail1->next;
                }
            }
            else
            {
                if(!head2)
                {
                    head2=curr;
                    tail2=curr;
                }
                else
                {
                    tail2->next=curr;
                    tail2=tail2->next;
                }
            }
            
            curr=curr->next;
        }
        if(tail2)
        tail2->next=0;
        
        if(!head1)
        return head2;
        
        tail1->next=head2;
        
        return head1;
    }
};
