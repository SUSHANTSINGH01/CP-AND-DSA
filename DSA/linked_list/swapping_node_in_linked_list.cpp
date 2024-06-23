// 1st Solution

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        int c=0;
        
        ListNode * start = head;
        ListNode * newHead = head;
        while(start){
            start=start->next;
            c++;
        }

        ListNode * kth;
        int k1=0;
        
        if(k>((c+1)/2)){
            if(((c+1)/2)!=0)
            k=c-k+1;
        }


        while(k1<k-1){
            head=head->next;
            k1++;
        }
        kth=head;

        while(k1<(c-k)){
            head=head->next;
            k1++;
        }

        int temp=head->val;
        head->val=kth->val;
        kth->val=temp;

        return newHead;
    }
};



// 2nd Solution



class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k)
    {
         if(!head)
         return 0;
        
        ListNode* temp=head;
        int c=1;
        while(temp->next)
        {
            temp=temp->next;
            c++;
        }
        
        if(k==1 || k==c)
        {
            int f=head->val;
            head->val=temp->val;
            temp->val=f;
            return head;
        }
        
        if(c>k)
        {
            temp=head;
            int s=k;
            k--;
            while(k-- && temp)
            temp=temp->next;
            
            ListNode* tmp=head;
            c=c-s;
            while(c-- && tmp)
            tmp=tmp->next;
            
            c=tmp->val;
            tmp->val=temp->val;
            temp->val=c;
        }
       
        return head;
    }
        
};

// 3rd Solution

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int get_len(ListNode *head)
    {
        int len=0;
        while(head)
        {
            len++;
            head=head->next;
        }
        return len;
    }
  
    ListNode* swapNodes(ListNode* head, int k) 
    {
        int n=get_len(head);  
		
        if((2*k-1)==n)
        return head;
        
        ListNode *x=head;
        ListNode *x_prev=0;  
        int cnt=k-1; 
        
        while(cnt--)
        {
            x_prev=x;
            x=x->next;
        }
        
        ListNode *y=head;
        ListNode *y_prev=0;
        cnt=n-k;
        
        while(cnt--)
        {
            y_prev=y;
            y=y->next;
        }
    
        if(x_prev)
        x_prev->next=y;
        
        if(y_prev)
        y_prev->next=x;
        
        ListNode *t=x->next;
        x->next=y->next;
        y->next=t;
        
        if(k==1)
        return y;

        if(k==n)
        return x;
        
        return 
        head;
    }
};
