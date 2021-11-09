// greedy approach

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
    ListNode* sortList(ListNode* head) 
    {
        vector<int>v;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
        ListNode *temp=new ListNode(0);
        ListNode *start=temp;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            ListNode *tmp=new ListNode(v[i]);
            temp->next=tmp;
            temp=temp->next;
        }
        return start->next;
    }
};



// merge sort implementation

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
    void sortList(ListNode** head )
    {
        // first half;
        ListNode* first;
        // second half;
        ListNode* second;    
        ListNode* cur=*head;
        if(cur==0 ||cur->next==0)
        return ;
        break_in_half(cur,&first,&second);
        sortList(&first);
        sortList(&second);
        *head=merge_sort(first,second);
    }
    void break_in_half(ListNode* cur,ListNode **first,ListNode **second)
    {
       ListNode* slow=cur;
       ListNode* fast=cur->next;
       while(fast!=0)
       {
           fast=fast->next;
           if(fast!=0)
           {
               fast=fast->next;
               slow=slow->next;
           }
       }
       *first=cur;
       *second=slow->next;
       slow->next=0;
   }
    ListNode* merge_sort(ListNode* l1,ListNode* l2)
    {
        if(l2==0)
        return l1;
        if(l1==0)
        return l2;
        ListNode* head;
        if(l1->val<l2->val)
        {
            head=l1;
            head->next=merge_sort(l1->next,l2);
        }
        else
        {
            head=l2;
            head->next=merge_sort(l1,l2->next);
        }
        return head;
    }
    ListNode* sortList(ListNode* head) 
    {
        sortList(&head);
        return head;
    }
};
