/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) 
{
    vector<int>vec1;
    vector<int>vec2;

    ListNode *head=A;
    int c=0;
    while(A)
    {
       vec1.push_back(A->val);
        A=A->next;
    }

    ListNode *temp=new ListNode(0);
    ListNode *start=temp;
    
    int n=vec1.size();
   
    int ch=0;
    int l=0;
    for(int i=0;i<n && l<=n/2;i++)
    {
        //cout<<temp->val<<" ";
        ListNode *add1;
        if(ch%2==0)
        {
            add1=new ListNode(vec1[l++]);
            temp->next=add1;
        temp=temp->next;
        }
        else
        {
            add1=new ListNode(vec1[n-l]);
           temp->next=add1;
          temp=temp->next;
        }
        
        
        ch++;
    }
    if(head->next==0)
    return head;
    return start->next;

}
